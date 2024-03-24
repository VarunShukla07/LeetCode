class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        //Better Approach
        // int dup = 0;
        // unordered_map<int,int> mpp;
        // for(int i = 0 ; i < nums.size();i++){
        //     mpp[nums[i]]++;
        // }
        // for(auto it : mpp){
        //     if (it.second > 1 && it.second > dup){
        //         dup = it.first;
        //     }
        // }
        // return dup;
        //Optimal Approach
        int slow = nums[0];
        int fast = nums[0];
        while (true) {
        slow = nums[slow];
        fast = nums[nums[fast]];
        if (slow == fast) {
                break;  
            }
        }
        fast = nums[0];
        while(slow != fast){
            slow = nums[slow];
            fast = nums[fast];
        }
        return fast;
    }
};