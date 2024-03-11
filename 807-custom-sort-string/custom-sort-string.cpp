class Solution {
public:
    string customSortString(string order, string s) {
        ios::sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0);
        string ans;
        unordered_map<char,int> mp;
        unordered_map<char,int>::iterator it;
        for(int i = 0 ; i < s.length();i++){
            mp[s[i]]++;
        }
        for(int i = 0 ; i < order.length();i++){
            char ch = order[i];
            it = mp.find(order[i]);
            if(it != mp.end()){
                while(it->second-- > 0){
                    ans += it->first;
                }
            }
        }
        for(auto it : mp){
            while(it.second > 0){
                ans += it.first;
                it.second--;
            }
        }
        return ans;
    }
};