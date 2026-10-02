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
    HashMap<TreeNode, Integer> memo;
    int maxDia;
    public int diameterOfBinaryTree(TreeNode root) {
        memo = new HashMap<>();
        maxDia = 0;
        depth(root);
        return maxDia;
    }
    int depth(TreeNode root) {
        if (root == null) return 0;
        
        int left = depth(root.left);
        int right = depth(root.right);

        maxDia = Math.max(maxDia, left + right);

        return Math.max(left, right) + 1;
    }
}