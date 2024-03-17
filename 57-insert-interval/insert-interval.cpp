auto speedUp = []() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    return 0;
}();
class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        vector<vector<int>> arr1;
        int i=0;
        for(i;i<intervals.size();i++){
            if(intervals[i][1]<newInterval[0]){
                arr1.push_back(intervals[i]);
            }
            else if (intervals[i][0] > newInterval[1]) {
                break;
            } else {
                newInterval[0] = min(newInterval[0], intervals[i][0]);
                newInterval[1] = max(newInterval[1], intervals[i][1]);
            }
        }
        arr1.push_back(newInterval);
        for(i;i<intervals.size();i++){
            arr1.push_back(intervals[i]);

        }
        return arr1;
    }
};