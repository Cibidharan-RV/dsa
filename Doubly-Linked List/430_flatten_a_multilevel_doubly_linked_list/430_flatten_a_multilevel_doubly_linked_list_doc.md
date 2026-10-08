# [430. Flatten a Multilevel Doubly Linked List](https://leetcode.com/problems/flatten-a-multilevel-doubly-linked-list/)

## Date
2026-10-08

## Difficulty
Medium

## Topics
- Linked List
- Depth-First Search
- Doubly-Linked List

---

## Idea

[View Submission on LeetCode](https://leetcode.com/problems/flatten-a-multilevel-doubly-linked-list/submissions/2165644470)

- When a node has a `child`, save its original `next` node in `temp`.
- Connect the child list immediately after the current node using `next` and `prev`.
- Set `child` to `null` because the flattened list should no longer contain child links.
- Traverse to the end of the inserted child list.
- Connect that end node to the previously saved `temp` node.
- If `temp` exists, update its `prev` pointer to the end of the child list.
- `func(cur.next)` continues processing the remaining original list after the child segment.
- `func(head.next)` continues traversal through the flattened structure.
- The process recursively handles nested child lists until every node is part of the single-level doubly linked list.

---

## Time Complexity

`O(n^2)` time in the worst case, where n = number of nodes. Traversing to the end of each child list can repeatedly scan nodes in nested structures.

## Space Complexity

`O(n)` auxiliary space in the worst case, where n = number of nodes. This comes from the recursive call stack. The list itself is modified in place.

---

## Key Learning

- A **child list can be inserted in place** by temporarily saving the original `next` pointer.
- In a doubly linked list, changing a connection requires updating both `next` and `prev`.
- When flattening nested structures, always preserve the remaining unprocessed portion before modifying the current links.
- Setting `child = null` removes the old hierarchical relationship after the child list has been integrated.

---

## Similar Problems

- [Flatten Binary Tree to Linked List](https://leetcode.com/problems/flatten-binary-tree-to-linked-list/)
- [Correct a Binary Tree](https://leetcode.com/problems/correct-a-binary-tree/)
