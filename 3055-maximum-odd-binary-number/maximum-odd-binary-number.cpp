auto speedUp = []() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    return 0;
}();
class Solution {
public:
    string maximumOddBinaryNumber(string s) {
        int ct = 0, ct1 =0;
        for(int i = 0 ; i < s.length();i++){
            if(s[i] == '1'){
                ct1++;
            }
            else{
                ct++;
            }
        }
        string ans = string(ct1 - 1, '1') + string(ct, '0') + '1';
        return ans;
    }
};