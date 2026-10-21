# [707. Design Linked List](https://leetcode.com/problems/design-linked-list/)

## Date
2026-10-21

## Difficulty
Medium

## Topics
- Linked List
- Design

---

## Idea

[View Submission on LeetCode](https://leetcode.com/problems/design-linked-list/submissions/2177889065)

- Use a **doubly linked list** with dummy head and tail nodes. The dummy nodes remain in the list permanently, so every real node has both a predecessor and a successor, simplifying insertion and deletion at the boundaries.
- Maintain `len` as the number of real nodes, allowing the implementation to validate indices and append at the tail without traversing the list to determine its size.
- The `getNode(index)` helper locates a node by traversing from the closer end: start at `head.next` when the index is in the first half, or at `tail.prev` when it is in the second half. This reduces the maximum traversal distance.
- To insert a node, identify its successor `succ` and predecessor `pred`, connect the new node between them, and increment `len`. Inserting at index `len` uses the tail sentinel directly.
- To delete a node, connect its predecessor directly to its successor, bypassing the target node, and decrement `len`.
- `addAtHead` and `addAtTail` reuse `addAtIndex`, keeping insertion logic centralized. The implementation relies on the problem constraints for nonnegative indices.

---

## Time Complexity

`O(1)` for `addAtHead` and `addAtTail`. `O(min(index, len - 1 - index))` traversal time for `get`, `deleteAtIndex`, and insertion at an existing index, where `len` is the number of real nodes before the operation. `O(1)` for insertion at index `len`.

## Space Complexity

`O(n)` auxiliary space for the `n` real nodes, with two additional sentinel nodes. Each node stores its value and two references.

---

## Key Learning

- **Sentinel nodes** eliminate special cases when inserting or deleting at the head and tail.
- A **doubly linked list** supports traversal from either end, reducing the distance needed to locate an indexed node.
- Maintaining a length counter avoids repeatedly traversing the list to calculate its size.
- Centralizing insertion logic in `addAtIndex` reduces duplicated pointer manipulation and helps keep boundary updates consistent.

---

## Similar Problems

- [Design Skiplist](https://leetcode.com/problems/design-skiplist/)
