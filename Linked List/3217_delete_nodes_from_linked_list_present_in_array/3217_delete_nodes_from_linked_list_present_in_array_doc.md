# [3217. Delete Nodes From Linked List Present in Array](https://leetcode.com/problems/delete-nodes-from-linked-list-present-in-array/)

## Date
2026-10-29

## Difficulty
Medium

## Topics
- Array
- Hash Table
- Linked List

---

## Idea

[View Submission on LeetCode](https://leetcode.com/problems/delete-nodes-from-linked-list-present-in-array/submissions/2184701007)

- Insert all values from `nums` into a `HashSet` for expected constant-time membership checks.
- Create a dummy node before `head` to handle deletion of the original head.
- Traverse the linked list using `cur`, with `prev` tracking the last retained node.
- If `cur.val` exists in the set, remove the node by setting `prev.next = cur.next`.
- Otherwise, retain the node and advance `prev` to `cur`.
- Advance `cur` in every iteration and return `dummy.next`.

---

## Time Complexity

`O(m + n)` expected time, where m is the length of `nums` and n is the number of linked-list nodes. Building the set takes expected O(m), and traversing the list takes expected O(n).

## Space Complexity

`O(m)` auxiliary space for the hash set, which stores at most m distinct values.

---

## Key Learning

- A `HashSet` supports expected O(1) membership checks, making it useful for filtering collections against a list of values.
- A dummy node simplifies linked-list deletion, including removal of the original head.
- When deleting a node, keep `prev` unchanged so it continues to reference the last retained node.
- Advancing `cur` in every iteration simplifies traversal and avoids duplicating pointer updates across branches.

---

## Similar Problems

- [Remove Linked List Elements](https://leetcode.com/problems/remove-linked-list-elements/)
- [Delete Node in a Linked List](https://leetcode.com/problems/delete-node-in-a-linked-list/)
- [Remove Nodes From Linked List](https://leetcode.com/problems/remove-nodes-from-linked-list/)
