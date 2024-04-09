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
    //Using level order traversal
    // int height(TreeNode* root){
    //     if(root == nullptr){
    //         return 0;
    //     }
    //     return max(height(root->left),height(root->right))+1;
    // }
    // int diameterOfBinaryTree(TreeNode* root) {
    //     if(root == nullptr){
    //         return 0;
    //     }
    //     queue<TreeNode*> qt;
    //     qt.push(root);
    //     int maxdim = 0;
    //     while(!qt.empty()){
    //         TreeNode* temp = qt.front();
    //         qt.pop();
    //         int lh = height(temp->left);
    //         int rh = height(temp->right);
    //         int currdim = lh+rh;
    //         maxdim = max(maxdim,currdim);
    //         if(temp->left != nullptr){
    //             qt.push(temp->left);
    //         }
    //         if(temp->right != nullptr){
    //             qt.push(temp->right);
    //         }
    //     }
    //     return maxdim;
    // }
    int height(TreeNode* node, int& diameter) {
        if (!node) {
            return 0;
        }
        int lh = height(node->left, diameter);
        int rh = height(node->right, diameter);
        diameter = max(diameter, lh + rh);
        return 1 + max(lh, rh);
    }
    int diameterOfBinaryTree(TreeNode* root) {
        int diameter = 0;
        height(root, diameter);
        return diameter;        
    }
};