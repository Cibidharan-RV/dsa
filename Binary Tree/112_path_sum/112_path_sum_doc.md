# [112. Path Sum](https://leetcode.com/problems/path-sum/)

## Date
2026-10-02

## Difficulty
Easy

## Topics
- Tree
- Depth-First Search
- Breadth-First Search
- Binary Tree

---

## Idea

[View Submission on LeetCode](https://leetcode.com/problems/path-sum/submissions/2159736282)

Use DFS on the binary tree while carrying the remaining target sum.

At each node, subtract `root.val` from `targetSum` and recursively search both
subtrees. A path is valid only when the current node is a leaf and its value
exactly matches the remaining target sum. Returning immediately at a leaf prevents
a path from being accepted before reaching the end of the root-to-leaf path.

---

## Time Complexity

O(N) $ worst-case, where N is the number of nodes; each node is visited at most once.

## Space Complexity

O(H) $ auxiliary space for the recursion stack, where H is the tree height.

---

## Key Learning

- For tree path problems, carry the **remaining requirement** through the recursion rather than recomputing the path sum.
- A `root-to-leaf` condition must explicitly check that the current node is a leaf; reaching the target at an internal node is not sufficient.
- When the recursive calls receive independent primitive state such as `targetSum`, restoring the variable after recursion is unnecessary because Java passes the primitive value by value.
- DFS can naturally express path existence using `left || right`, allowing short-circuiting as soon as a valid path is found.

---

## Similar Problems

- [Path Sum II](https://leetcode.com/problems/path-sum-ii/)
- [Binary Tree Maximum Path Sum](https://leetcode.com/problems/binary-tree-maximum-path-sum/)
- [Sum Root to Leaf Numbers](https://leetcode.com/problems/sum-root-to-leaf-numbers/)
- [Path Sum III](https://leetcode.com/problems/path-sum-iii/)
- [Path Sum IV](https://leetcode.com/problems/path-sum-iv/)
