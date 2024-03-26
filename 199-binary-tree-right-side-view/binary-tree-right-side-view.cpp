/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<int> rightSideView(TreeNode* root) {
        vector<int> ans;
        if(root == NULL){
            return ans;
        }
        queue<TreeNode*> qt;
        qt.push(root);
        while(!qt.empty()){
            int n = qt.size();
            for(int i = 0 ; i < n ; i++){
                TreeNode* node = qt.front();
            qt.pop();
            if(i == n - 1){
                ans.push_back(node->val);
            }
            if(node->left != NULL){
                qt.push(node->left);
            }
            if(node->right != NULL){
                qt.push(node->right);
            }
        }
            
        }
        return ans;
    }
};