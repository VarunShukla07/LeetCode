class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        if(nums.size() == 1){
            return 1;
        }
        sort(nums.begin(),nums.end());
        unordered_map<int,int> mp;
        for(int i = 0 ; i < nums.size();i++){
            mp[nums[i]]++;
        }
        int maxfreq = 0;
        for(auto it : mp){
            maxfreq = max(maxfreq,it.second);
        }
        int samefreq = 0;
        for(auto it : mp){
            if(maxfreq == it.second){
                samefreq = samefreq + maxfreq;
            }
        }
        return samefreq;
    }
};