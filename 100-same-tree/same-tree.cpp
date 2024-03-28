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
    bool isSameTree(TreeNode* p, TreeNode* q) {
        queue<TreeNode*> qt,qt2;
        qt.push(p);
        qt2.push(q);
        while(!qt.empty() && !qt2.empty()){
            TreeNode* node = qt.front();
            TreeNode* node2 = qt2.front();
            qt.pop();
            qt2.pop();
            if(node == nullptr && node2 == nullptr){
                continue;
            }
            if(node == nullptr || node2 == nullptr || node->val != node2->val){
                return false;
            }
            qt.push(node->left);
            qt.push(node->right);
            qt2.push(node2->left);
            qt2.push(node2->right);
        }
        return true;
    }
};