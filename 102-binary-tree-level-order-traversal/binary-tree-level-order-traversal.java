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
    public List<List<Integer>> levelOrder(TreeNode root) {
        Queue<Pair<TreeNode,Integer>> qt = new LinkedList<>();
        List<List<Integer>> ans = new ArrayList<>();
        if(root == null){
            return ans;
        }
        qt.offer(new Pair<>(root,0));
        while(!qt.isEmpty()){
            Pair<TreeNode, Integer> pair= qt.poll();
            TreeNode newnode = pair.getKey();
            int level = pair.getValue();

            if(ans.size() == level){
                ans.add(new ArrayList<>());
            }
            ans.get(level).add(newnode.val);
            if(newnode.left != null){
                qt.offer(new Pair<>(newnode.left,level+1));
            }
            if(newnode.right != null){
                qt.offer(new Pair<>(newnode.right,level+1));
            }
        }
        return ans;
    }
}