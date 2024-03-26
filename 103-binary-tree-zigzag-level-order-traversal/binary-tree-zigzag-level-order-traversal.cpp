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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> ans;
        if(root == nullptr){
            return ans;
        }
        queue<pair<TreeNode*,int>> qt;
        qt.push({root,0});
        int ct = 0;
        while(!qt.empty()){
            vector<int> ans2;
            int n = qt.size();
            for(int i = 0 ; i < n ; i++){
                auto [node,level] = qt.front();
                qt.pop();
                ans2.push_back(node->val);
                if(node->left != nullptr){
                    qt.push({node->left,level+1});
                }
                if(node->right != nullptr){
                    qt.push({node->right,level+1});
                }
            }
            if(ct % 2 == 1){
                reverse(ans2.begin(),ans2.end());
            }
            ct++;
            ans.push_back(ans2);
        }
        return ans;
    }
};