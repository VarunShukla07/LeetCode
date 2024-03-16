class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        unordered_map<int,int> mp;
        int maxlen = 0,ct = 0; 
        for(int i = 0 ; i < nums.size();i++){
            if(nums[i] == 1){
                ct++;
            }
            else{
                ct--;
            }
            if(ct == 0){
                maxlen = max(maxlen,i+1);
            }
            else if(mp.find(ct) != mp.end()){
                maxlen = max(maxlen,i-mp[ct]);
            }
            else{
                mp[ct] = i;
            }
        }
        return maxlen;
    }
};