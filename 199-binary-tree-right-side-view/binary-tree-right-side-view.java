/**
 * Definition for a binary tree node.
 * public class TreeNode {
 *     int val;
 *     TreeNode left;
 *     TreeNode right;
 *     TreeNode() {}
 *     TreeNode(int val) { this.val = val; }
 *     TreeNode(int val, TreeNode left, TreeNode right) {
 *         this.val = val;
 *         this.left = left;
 *         this.right = right;
 *     }
 * }
 */
class Solution {
    public void recurse(TreeNode root,List<Integer> ans,int level){
        if(root == null){
            return;
        }
        if(level == ans.size()){
            ans.add(root.val);
        }
        recurse(root.right,ans,level+1);
        recurse(root.left,ans, level+1);
    }
    public List<Integer> rightSideView(TreeNode root) {
        List<Integer> ans = new ArrayList<>();
        recurse(root,ans,0);
        return ans;
    }
}