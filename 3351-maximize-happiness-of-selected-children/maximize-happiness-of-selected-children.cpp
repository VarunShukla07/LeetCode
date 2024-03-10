class Solution {
public:
    long long maximumHappinessSum(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        long long ct = 0;
        long long i , j = 0; 
        for(i = nums.size() - 1;i>=0 && k >0;i--,j++,k--){
            if(nums[i] > j){
                ct += nums[i] - j;
            }
        }
        return ct;
    }
};