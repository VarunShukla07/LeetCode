auto speedUp = []() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    return 0;
}();
class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        unordered_map<int,int> mpp;
        vector<int> ans;
        for(int i = 0 ; i < nums.size();i++){
            mpp[nums[i]]++;
        }
        for(auto it : mpp){
            if(it.second > 1){
                ans.push_back(it.first);
            }
        }
        return ans;
    }
};