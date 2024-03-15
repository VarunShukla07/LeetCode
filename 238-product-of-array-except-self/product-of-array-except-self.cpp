class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        // vector<int>ans(nums.size());
        // int prod;
        // for(int i = 0 ; i < nums.size();i++){
        //     prod = 1;
        //     for(int j = 0 ; j < nums.size();j++){
        //         if( j != i){
        //             prod = prod * nums[j];
        //         }
        //     }
        //     ans.push_back(prod);
        // }
        // return ans;

        // Optimal:
        vector<int> leftprod(nums.size(),1);
        vector<int> rightprod(nums.size(),1);
        int n = nums.size();
        for(int i = 1 ; i < n; i++ ){
            leftprod[i] = leftprod[i-1] * nums[i-1];
        }
        for(int i = n - 2; i >= 0;i--){
            rightprod[i] = rightprod[i+1] * nums[i+1];
        }
        for(int i = 0 ; i < n ; i++){
            nums[i] = leftprod[i] * rightprod[i];
        }
        return nums;
    }
};