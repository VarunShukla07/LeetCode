class Solution {
public:
    int minimumLength(string s) {
        /* 2 pointer approach:
        For i (as prefix) = 0 , and j (As suffix) = n-1,we compare
        For instance, we take: aabccabba
        Now i will go to 1, and j only n-1
        Hence, it removes both,goes further
        */
        int n = s.length();
        int i = 0, j = n-1;
        //In loop, if at both index, char matches(then it will undergo in loop)
        while( i < j && s[i] == s[j]){
            char ch = s[i]; //s[j]
            while( i < j && s[i] == ch){ // Take prefix, and increase pointer
                i++;
            }
            while( j >= i && s[j] == ch){// Take suffix, and decrease pointer
                j--;
                //Note : j >= i
                /*Hence for eg: aa ( i = 0 , j = n-1), Now i go to j(index)
                But j can't iterate(hence no move) so j==i(to iterate)*/
            }
        }
        return j-i+1;
    }
};