auto speedUp = []() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    return 0;
}();
class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& arr, int k) {
        // int n = arr.size();
        // int ct = 0;
        // for(int i = 0 ; i < n ; i++){
        //     long long prod = 1;
        //     for(int j = i ; j < n ; j++){
        //         prod *=arr[j];
        //         if (prod < k){ct++;}
        //     }
        // }
        // return ct;
        if(k<=1) return 0;
        int ct = 0, j = 0;
        long long prod = 1;
        for(int i = 0 ; i < arr.size();i++){
            prod *= arr[i];
            while(prod >= k){
                prod /= arr[j];
                j++;
            }
            ct += i - j + 1;
        }
        return ct;
    }
};