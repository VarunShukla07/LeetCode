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
    int minDepth(TreeNode* root) {
        int depth = 0;
        if(root == nullptr){
            return depth;
        }
        queue<pair<TreeNode*,int>> qt;
        qt.push({root,1});
        while(!qt.empty()){
            auto [node,level] = qt.front();
            qt.pop();
            if(node->left != nullptr){
                qt.push({node->left,level+1});
            }
            if(node->right != nullptr){
                qt.push({node->right,level+1});
            }
            if(node->left == nullptr && node->right == nullptr){
                if(depth == 0 || level < depth){
                    depth = level;
                }
            }
        }
        return depth;
    }
};