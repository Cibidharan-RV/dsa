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

[View Submission on LeetCode](https://leetcode.com/problems/diameter-of-binary-tree/submissions/2159796610)

Traverse every node and compute the diameter passing through that node as the sum of
the maximum depths of its left and right subtrees. `maxD()` maintains the largest
diameter found while recursively visiting both subtrees.

Since the same subtree depth can be requested multiple times, memoize `depth(root)`
using the node itself as the key. Each subtree depth is therefore computed only once
and reused for later diameter calculations.

---

## Time Complexity

O(N) $ time because every node is traversed and each node's depth is memoized once.

## Space Complexity

O(N) $ auxiliary space for the HashMap and recursion stacks; the memo stores one depth per node.

---

## Key Learning

- Memoization is useful when recursive calls repeatedly ask for the same function value on overlapping subproblems.
- A `TreeNode` can directly serve as a `HashMap` key, allowing each subtree's computed depth to be associated with its root.
- The sentinel `-1` is safe for cached depth lookup because every non-null subtree has depth at least `1`.
- The straightforward per-node diameter algorithm can be optimized from O(N²) to O(N) by memoizing repeated subtree-depth calculations.
- Memoization can improve asymptotic complexity while still having more runtime overhead than an equivalent O(N) approach that computes all required information in one traversal.

---

## Similar Problems

- [Diameter of N-Ary Tree](https://leetcode.com/problems/diameter-of-n-ary-tree/)
- [Longest Path With Different Adjacent Characters](https://leetcode.com/problems/longest-path-with-different-adjacent-characters/)
