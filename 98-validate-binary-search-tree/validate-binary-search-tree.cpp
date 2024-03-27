/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    void inorder(TreeNode* root,vector<int>& ans){
        if(root == nullptr){
            return;
        }
        
        inorder(root->left,ans);
        ans.push_back(root->val);
        inorder(root->right,ans);
    }
    bool isValidBST(TreeNode* root) {
        vector<int> ans;
        inorder(root,ans);
        cout<<ans.size();
        for(int i = 0 ; i < ans.size();i++){
            cout<<ans[i];
        }
        for(int i = 1 ; i < ans.size();i++){
            if(ans[i-1] >= ans[i]){
                return false;
            }
        }
        return true;
        // return isValidBSTHelper(root, LONG_MIN, LONG_MAX);
    }

    bool isValidBSTHelper(TreeNode* root, long minVal, long maxVal) {
        if (root == nullptr) {
            return true;
        }
        
        if (root->val <= minVal || root->val >= maxVal) {
            return false;
        }

        // Recursively check left and right subtrees
        return isValidBSTHelper(root->left, minVal, root->val) && 
               isValidBSTHelper(root->right, root->val, maxVal);
    }
};