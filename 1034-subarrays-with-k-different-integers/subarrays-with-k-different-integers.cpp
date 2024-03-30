class Solution {
public:
    int totalSubsLessOrEqualK(vector<int> & nums, int k){
        int n = nums.size(), start=0, count =0;
        unordered_map<int,int> mp;
        for(int i=0;i<n;i++){
            mp[nums[i]]++;
            while(start<n && mp.size()>k){
                mp[nums[start]]--;
                if(!mp[nums[start]]) mp.erase(nums[start]);
                start++;
            }
            count+= (i-start+1);
        }
        return count;
    }
    int subarraysWithKDistinct(vector<int>& nums, int k) {
        return totalSubsLessOrEqualK(nums, k) - totalSubsLessOrEqualK(nums, k-1);
    }
};