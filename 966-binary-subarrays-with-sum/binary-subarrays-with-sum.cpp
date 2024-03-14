class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        unordered_map<int,int> mp;
        int result = 0,currsum = 0;
        mp[0] = 1;
        for(int i = 0 ; i < nums.size();i++){
            currsum += nums[i];
            int rem = currsum - goal;
            if( mp.find(rem) != mp.end()){
                result += mp[rem];
            }
            mp[currsum]++;
        }
        return result;
    }
};