class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char, char> sToT; 
        unordered_map<char, char> tToS; 
        
        for (int i = 0; i < s.size(); i++) {
            char charS = s[i];
            char charT = t[i];
            
            if (sToT.find(charS) == sToT.end() && tToS.find(charT) == tToS.end()) {
                sToT[charS] = charT;
                tToS[charT] = charS;
            } else if (sToT[charS] != charT || tToS[charT] != charS) {
                return false; 
            }
        }
        return true;
    }
};