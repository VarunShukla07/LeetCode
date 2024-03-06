class Solution {
public:
    string reverseWords(string s) {
        //Seen the optimize solution
        /* Here we use istringstream, so it use both mixed(data and integer) */
        istringstream str(s);
        stack<string> ans;
        string temp ="";
        string i;
        // Now we push all the words in stack
        while(str >> i){
            ans.push(i);
        }
        //Looping, till stack is empty
        while(!ans.empty()){
            temp +=ans.top();
            ans.pop();
            if(!ans.empty()){
                temp +=" "; // Adding space
            }
        }
        return temp;
    }
};