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
    TreeNode* searchBST(TreeNode* root, int val) {
        queue<pair<TreeNode*,int>> qt;
        if(root == nullptr){
            return nullptr;
        }
        qt.push({root,0});
        while(!qt.empty()){
            int n = qt.size();
            for(int i = 0 ; i < n ; i++){
                auto [node,level] = qt.front();
                qt.pop();
                if(node->val == val){
                    return node;
                    break;
                }
                if(node->left != nullptr){
                    qt.push({node->left,level+1});
                }
                if(node->right != nullptr){
                    qt.push({node->right,level+1});
                }
            }
        }
        return nullptr;
    }
};