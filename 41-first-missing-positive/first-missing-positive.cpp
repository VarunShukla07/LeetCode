auto speedUp = []() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    return 0;
}();
class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        // unordered_map<int, int> mpp;
        // // int maxi = *max_element(nums.begin(),nums.end());
        // int maxi = 0;
        // for (int num : nums) {
        //     if (num > 0) {
        //         mpp[num]++;
        //         maxi = max(maxi, num);
        //     }
        // }
        // for(int i = 0 ; i < nums.size();i++){
        //     if(nums[i] > 0){
        //         mpp[nums[i]]++;
        //     }
        // }
        // for(int i = 1 ; i <= maxi ; i++){
        //     if(mpp.find(i) == mpp.end()){
        //         return i;
        //     }
        // }
        // return maxi + 1;
        int n = nums.size();
        for(int& num : nums){
            if( num < 1 || num > n){
                num = n + 1;
            } 
        }
        for(int i = 0 ; i < n ; i++){
            int num = std::abs(nums[i]);
            if(num <= n){
                nums[num - 1] = -std::abs(nums[num-1]);
            }
        }
        for(int i = 0 ; i < n ; i++){
            if(nums[i] > 0){
                return i+1;
            }
        }
        return n+1;
    }
};