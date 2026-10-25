# [2181. Merge Nodes in Between Zeros](https://leetcode.com/problems/merge-nodes-in-between-zeros/)

## Date
2026-10-25

## Difficulty
Medium

## Topics
- Linked List
- Simulation

---

## Idea

[View Submission on LeetCode](https://leetcode.com/problems/merge-nodes-in-between-zeros/submissions/2181180478)

- Reuse existing nodes instead of allocating new ones.
- `ansHead` preserves the original head as the return pointer.
- `ans` tracks the node where the current segment's sum is accumulated.
- When a zero-valued node is encountered, connect it as the next output node.
- Add the following non-zero nodes' values to the current output node.
- Set `ans.next = null` at the end to disconnect unused nodes from the result.

---

## Time Complexity

`O(n)`, where n is the number of input nodes. Each node is traversed at most once.

## Space Complexity

`O(1)` auxiliary space. Only a constant number of node references are used.

---

## Key Learning

- In-place linked-list transformations avoid allocating a separate result list.
- Preserve a reference to the result head while advancing traversal pointers.
- Explicitly terminate a reused list to prevent unused nodes from remaining connected.
- A single traversal loop may reduce loop-control overhead without improving asymptotic complexity.

---

## Similar Problems

- [Linked List Components](https://leetcode.com/problems/linked-list-components/)
