# [2487. Remove Nodes From Linked List](https://leetcode.com/problems/remove-nodes-from-linked-list/)

## Date
2026-10-27

## Difficulty
Medium

## Topics
- Linked List
- Stack
- Recursion
- Monotonic Stack

---

## Idea

[View Submission on LeetCode](https://leetcode.com/problems/remove-nodes-from-linked-list/submissions/2183047137)

- Reverse the linked list in place so that nodes originally to the right are processed first.
- Initialize `max` with the value of the first node in the reversed list.
- Traverse the reversed list using `cur`, saving `cur.next` in `next` before modifying links.
- If `cur.val >= max`, retain the node, update `max` to `cur.val`, and link `cur.next` to `prev`.
- Advance `prev` to the retained node. This simultaneously filters the list and restores the original order of retained nodes.
- If `cur.val < max`, discard the node by not linking it into the result.
- Return `prev`, which points to the head of the filtered list in the original order.

---

## Time Complexity

`O(n)`, where n is the number of nodes. Each node is visited once during the initial reversal and once during the combined filtering and reconstruction traversal.

## Space Complexity

`O(1)` auxiliary space. The algorithm modifies existing links and uses a constant number of pointers and variables.

---

## Key Learning

- Reversing a singly linked list enables right-to-left processing without a stack or recursion.
- A running maximum identifies nodes that must be removed because a greater value exists to their right.
- Saving the next node before changing links preserves access to the unprocessed list.
- Filtering and rebuilding can be combined when retained nodes are linked directly into the result during traversal.

---

## Similar Problems

- [Reverse Linked List](https://leetcode.com/problems/reverse-linked-list/)
- [Delete Node in a Linked List](https://leetcode.com/problems/delete-node-in-a-linked-list/)
- [Next Greater Element I](https://leetcode.com/problems/next-greater-element-i/)
- [Delete Nodes From Linked List Present in Array](https://leetcode.com/problems/delete-nodes-from-linked-list-present-in-array/)
