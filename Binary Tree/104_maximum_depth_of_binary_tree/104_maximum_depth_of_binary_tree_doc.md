# [104. Maximum Depth of Binary Tree](https://leetcode.com/problems/maximum-depth-of-binary-tree/)

## Date
2026-09-25

## Difficulty
Easy

## Topics
- Tree
- Depth-First Search
- Breadth-First Search
- Binary Tree

---

## Idea

[View Submission on LeetCode](https://leetcode.com/problems/maximum-depth-of-binary-tree/submissions/2152528326)

Uses recursion to find the maximum depth of a binary tree.

If `root` is `null`, the subtree has depth `0`.

Otherwise, recursively find the maximum depth of the left and right subtrees, then add `1` for the current node.

The maximum of the two subtree depths gives the maximum depth of the current tree.

---

## Time Complexity

O(n)

## Space Complexity

O(h) auxiliary space, where `h` is the height of the tree.

In the worst case of a skewed tree, `h = n`, giving `O(n)` space. For a balanced tree, `h = O(log n)`.

---

## Key Learning

- `null` is the base case with depth `0`.
- Each non-null node contributes `1` to the depth.
- The recursion follows the tree structure, visiting every node once.
- Auxiliary space is determined by the recursion stack and therefore depends on the tree height.

---

## Similar Problems

- [Balanced Binary Tree](https://leetcode.com/problems/balanced-binary-tree/)
- [Minimum Depth of Binary Tree](https://leetcode.com/problems/minimum-depth-of-binary-tree/)
- [Maximum Depth of N-ary Tree](https://leetcode.com/problems/maximum-depth-of-n-ary-tree/)
- [Time Needed to Inform All Employees](https://leetcode.com/problems/time-needed-to-inform-all-employees/)
- [Amount of Time for Binary Tree to Be Infected](https://leetcode.com/problems/amount-of-time-for-binary-tree-to-be-infected/)
- [Height of Binary Tree After Subtree Removal Queries](https://leetcode.com/problems/height-of-binary-tree-after-subtree-removal-queries/)
