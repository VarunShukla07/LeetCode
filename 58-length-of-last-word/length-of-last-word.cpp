auto speedUp = []() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    return 0;
}();
class Solution {
public:
    int lengthOfLastWord(string s) {
        istringstream iss(s);
        string lastWord;
        while (iss >> lastWord) {
        }
        return lastWord.length();
    }
};