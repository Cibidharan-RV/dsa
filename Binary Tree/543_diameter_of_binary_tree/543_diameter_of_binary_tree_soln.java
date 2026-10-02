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
    public int diameterOfBinaryTree(TreeNode root) {
        memo = new HashMap<>();
        return maxD(root, 0);
    }
    int maxD(TreeNode root, int max) {
        if (root == null) return max;
        max = Math.max(
            dia(root), 
            max
        );
        return Math.max(
            maxD(root.right, max), 
            maxD(root.left, max)
        );
    }
    int dia(TreeNode root) {
        int dia = depth(root.right) + depth(root.left);
        return dia;
    }
    int depth(TreeNode root) {
        if (root == null) {
            return 0;
        }
        int d = memo.getOrDefault(root, -1);
        if (d != -1) return d;
        d = Math.max(depth(root.left), depth(root.right)) + 1;
        memo.put(root, d);
        return d;
        
    }
}