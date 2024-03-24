auto speedUp = []() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    return 0;
}();
class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int dup = 0;
        unordered_map<int,int> mpp;
        for(int i = 0 ; i < nums.size();i++){
            mpp[nums[i]]++;
        }
        for(auto it : mpp){
            if (it.second > 1 && it.second > dup){
                dup = it.first;
            }
        }
        return dup;
    }
};