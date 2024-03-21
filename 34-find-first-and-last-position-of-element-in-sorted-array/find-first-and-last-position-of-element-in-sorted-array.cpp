auto speedUp = []() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    return 0;
}();
class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int first = -1, last = -1,ct = 0;
        for(int i = 0 ; i < nums.size();i++){
            if(nums[i] == target & ct == 0){
                first = i;
                last = i;
                ct++;
            }
            else if(nums[i] == target && ct > 0){
                last = i;
                ct++;
            }
        }
        return {first,last};
    }
};