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
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> ans;
        if(root == NULL){
            return ans;
        }
        queue<pair<TreeNode*,int>> qt;
        qt.push({root,0});
        while(!qt.empty()){
            auto [node,level] = qt.front();
            qt.pop();
            if(ans.size() == level){
                ans.push_back({});
            }
            ans[level].push_back(node->val);
            if(node->left != NULL){
                qt.push({node->left,level+1});
            }
            if(node->right != NULL){
                qt.push({node->right,level+1});
            }
        }
        return ans;
    }
};