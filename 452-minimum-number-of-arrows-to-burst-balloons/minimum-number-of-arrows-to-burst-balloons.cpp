class Solution {
public:
    static bool compare(vector<int>& v1, vector<int>& v2){
        return v1[1] < v2[1];
    }
    int findMinArrowShots(vector<vector<int>>& points) {
        if(points.empty()) return 0;
        int ct = 1;
        sort(points.begin(),points.end(),compare);
        int startarrow = points[0][1];
        for(int i = 1 ; i < points.size();i++){
            if(points[i][0] > startarrow){
                ct++;
                startarrow = points[i][1];
            }
        }
        return ct;
    }
};