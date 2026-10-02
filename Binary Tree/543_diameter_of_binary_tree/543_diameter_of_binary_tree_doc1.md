# [543. Diameter of Binary Tree](https://leetcode.com/problems/diameter-of-binary-tree/)

## Date
2026-10-02

## Difficulty
Easy

## Topics
- Tree
- Depth-First Search
- Binary Tree
- DP on Trees

---

## Idea

[View Submission on LeetCode](https://leetcode.com/problems/diameter-of-binary-tree/submissions/2159802571)

Use postorder DFS where each recursive call returns the maximum depth of its subtree.
After getting the left and right depths, `left + right` gives the diameter passing through
the current node, so update `maxDia`. Return `Math.max(left, right) + 1` as the depth
of the current subtree.

This combines depth calculation and diameter calculation into one traversal, eliminating
the need for separate traversal or memoization.

---

## Time Complexity

O(N) $ time; every node is visited exactly once.

## Space Complexity

O(H) $ auxiliary space for the recursion stack, where H is the tree height.

---

## Key Learning

- In postorder tree DP, a recursive call can return information needed by its parent while also updating a global answer.
- The value returned to the parent and the value used to update the answer can represent different quantities.
- `max(left, right) + 1` gives subtree depth, while `left + right` gives the diameter through the current node.
- Combining dependent computations into one traversal can eliminate memoization overhead while keeping O(N) time.

---

## Similar Problems

- [Diameter of N-Ary Tree](https://leetcode.com/problems/diameter-of-n-ary-tree/)
- [Longest Path With Different Adjacent Characters](https://leetcode.com/problems/longest-path-with-different-adjacent-characters/)
