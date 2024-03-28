class Solution {
public:
    string largestOddNumber(string num) {
        int res = -1;
        for(int i = num.size() - 1 ; i >=0 ; i--){
            int n = num[i] - '0';
            if(n % 2 != 0){
                res = i;
                break;
            }
        }
        if(res == -1){
            return "";
        }
        else{
            return num.substr(0,res+1);
        }
        
        // int n = stoi(num);
        // int res = 0;
        // if(n % 2 == 1){
        //     return num;
        // }
        // else{
        //     int temp = stoi(num);
        //     while( temp % 2 == 0){
        //         temp /= 10;
        //     }
        //     res = max(res,temp);
        //     for(int i = 0 ; i < num.size(); i++){
        //         int temp1 = num[i] - '0';
        //         if(temp1 % 2 == 1){
        //             res = max(res,temp1);
        //         }
        //     }
        //     if(res == 0){
        //         return "";
        //     }
        //     else{
        //         return to_string(res);
        //     }
        // }
    }
};