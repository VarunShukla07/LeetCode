class Solution {
public:
    string removeOuterParentheses(string s) {
        //Simple approach
        /* Here if '(' comes and ct == 0 , means outermost parentheses,just ct++
        If '(', ct >=1, means innermost parentheses,and add to string
        If ')', ct>1, means innermost parentheses,add to string
        If ')', ct == 1, means outermost parentheses,so just ct--;
        */
        string ans="";
        int ct = 0;
        for(char c : s){
            if( c=='(' && ct == 0) ct++;
            else if(c == '(' && ct >=1) {
                ans +=c; 
                ct++;
            }
            else if(c == ')' && ct >1) {
                ans +=c; 
                ct--;
            }
            else if(c == ')' && ct == 1) ct--;
        }
        return ans;
    }
};