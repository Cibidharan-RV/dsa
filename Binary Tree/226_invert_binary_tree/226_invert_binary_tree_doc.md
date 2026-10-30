# [226. Invert Binary Tree](https://leetcode.com/problems/invert-binary-tree/)

## Date
2026-10-30

## Difficulty
Easy

## Topics
- Tree
- Depth-First Search
- Breadth-First Search
- Binary Tree

---

## Idea

[View Submission on LeetCode](https://leetcode.com/problems/invert-binary-tree/submissions/2185641603)

- Use recursive DFS to traverse the binary tree.
- If `root` is `null`, return immediately (base case).
- Swap the left and right child references of the current node using a temporary variable.
- Recursively invert the right subtree and then the left subtree.
- Continue until every node has been visited and its children have been swapped.
- Return the original root, which now represents the inverted tree.

---

## Time Complexity

`O(n)`, where n is the number of nodes. Every node is visited exactly once.

## Space Complexity

`O(h)` auxiliary space, where h is the height of the tree, due to the recursion stack. Worst case `O(n)` for a skewed tree and `O(log n)` for a balanced tree.

---

## Key Learning

- Recursive DFS can modify a tree in place without creating a new tree.
- Swapping child references at every node produces the mirror image of a binary tree.
- Always handle a `null` node as the recursion base case.
- The order of processing left and right subtrees does not affect the final inverted tree.

---

## Similar Problems

- [Reverse Odd Levels of Binary Tree](https://leetcode.com/problems/reverse-odd-levels-of-binary-tree/)
