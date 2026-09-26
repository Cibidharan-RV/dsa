# [100. Same Tree](https://leetcode.com/problems/same-tree/)

## Date
2026-09-26

## Difficulty
Easy

## Topics
- Tree
- Depth-First Search
- Breadth-First Search
- Binary Tree

---

## Idea

[View Submission on LeetCode](https://leetcode.com/problems/same-tree/submissions/2153864134)

Recursively compare two binary trees to determine whether they are structurally
identical and contain the same values.

For each pair of corresponding nodes:
- If both nodes are `null`, they match.
- If exactly one node is `null`, the trees differ.
- If their values differ, the trees differ.
- Otherwise, recursively compare their left subtrees and right subtrees.

The trees are the same only when both corresponding subtrees are also the same.

---

## Time Complexity

Each node pair is visited once, giving **O(n)** time, where `n` is the number
of corresponding nodes examined. In the worst case, this is proportional to
the total number of nodes in the two trees.

## Space Complexity

The auxiliary space is **O(h)** due to the recursion stack, where `h` is the
height of the trees. For balanced trees this is **O(log n)**, while for a
skewed tree it is **O(n)**.

No additional data structure is used, and the returned boolean does not require
any result space.

---

## Key Learning

- The `null` checks handle both structural differences and the recursion base case.
- `p.val != q.val` immediately detects a value mismatch without exploring deeper.
- Both `left` and `right` subtrees must match because tree equality requires
  identical structure and corresponding values.
- `&&` short-circuits the recursion: the right subtree is checked only if the
  left subtree matches.

---

## Similar Problems

- 
