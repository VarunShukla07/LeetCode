class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        //Better Approach - 2 pointers with Set
        // vector<int> ans;
        // set<int> st; // Here it want unique 
        // int i = 0 , j = 0;
        // sort(nums1.begin(),nums1.end());
        // sort(nums2.begin(),nums2.end());
        // while ( i < nums1.size() && j < nums2.size()){
        //     if(nums1[i] > nums2[j]){
        //         j++;
        //     }
        //     else if(nums1[i] < nums2[j]){
        //         i++;
        //     }
        //     else{
        //         st.insert(nums1[i]);
        //         i++;
        //         j++;
        //     }
        // }
        // for(auto it : st){
        //     ans.push_back(it);
        // }
        // return ans;
        //2nd Approach try
        set<int> st1, st2;
        vector<int> ans;
        for(auto it : nums1){
            st1.insert(it);
        }
        for(auto it : nums2){
            st2.insert(it);
        }
        for(auto it : st1){
            if(st2.count(it)){
                ans.push_back(it);
            }
        }
        return ans;
    }
};