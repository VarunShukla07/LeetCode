auto speedUp = []() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    return 0;
}();
class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        map<int, int> mpp;
        int maxi = 0;
        for (int num : nums) {
            if (num > 0) {
                mpp[num]++;
                maxi = max(maxi, num);
            }
        }
        for(int i = 0 ; i < nums.size();i++){
            if(nums[i] > 0){
                mpp[nums[i]]++;
            }
        }
        for(int i = 1 ; i <= maxi ; i++){
            if(mpp.find(i) == mpp.end()){
                return i;
            }
        }
        return maxi + 1;
    }
};