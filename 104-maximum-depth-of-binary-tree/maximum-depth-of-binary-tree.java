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
    public int maxDepth(TreeNode root) {
        if(root == null){
            return 0;
        }
        int level = 1;
        LinkedList<Pair> qt = new LinkedList<>();
        qt.offer(new Pair<>(root,1));
        while(!qt.isEmpty()){
            Pair<TreeNode,Integer> pair = qt.poll();
            TreeNode node = pair.getKey();
            level = pair.getValue();

            if(node.left != null){
                qt.offer(new Pair<>(node.left,level+1));
            }
            if(node.right != null){
                qt.offer(new Pair<>(node.right,level+1));
            }
        }
        return level;
        
    }
}