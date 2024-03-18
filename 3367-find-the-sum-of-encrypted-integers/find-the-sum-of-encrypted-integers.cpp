auto speedUp = []() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    return 0;
}();
class Solution {
public:
    int sumOfEncryptedInt(vector<int>& nums) {
        int sum = 0;
        for(auto it : nums){
            int temp = it, maxdigit = 0,ct = 0;
            while(temp > 0){
                maxdigit = max(maxdigit,temp%10);
                ct++;
                temp /= 10;
            }
            int cal = 0;
            while(ct > 0){
                cal = cal * 10 + maxdigit;
                ct--;
            }
            sum += cal;
        }
        return sum;
    }
};