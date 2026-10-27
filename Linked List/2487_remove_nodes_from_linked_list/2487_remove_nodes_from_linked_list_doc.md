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

[View Submission on LeetCode](https://leetcode.com/problems/remove-nodes-from-linked-list/submissions/2183026339)

- Reverse the linked list in place so that nodes originally to the right are processed first.
- Initialize `max` with the value of the first node in the reversed list.
- Traverse the reversed list using `cur`:
  - If `cur.next.val < max`, remove `cur.next` by bypassing it.
  - Otherwise, retain `cur.next`, update `max` to its value, and advance `cur`.
- Reverse the filtered list again to restore the original order.
- Return `prev`, which points to the head of the restored list.

---

## Time Complexity

`O(n)`, where n is the number of nodes. The algorithm performs two reversals and one filtering traversal, each taking linear time.

## Space Complexity

`O(1)` auxiliary space. The list is modified in place using a constant number of pointers and variables.

---

## Key Learning

- Reversing a singly linked list allows processing nodes from right to left without a stack or recursion.
- Maintain a running maximum to determine whether each node should be retained.
- When removing a node, bypass it through the previous retained node's `next` pointer.
- Reverse the filtered list again to restore the original order.

---

## Mistakes Made

- When filtering in reversed order, compare each candidate against the maximum of all previously retained nodes, not merely the immediately preceding node.

---

## Similar Problems

- [Reverse Linked List](https://leetcode.com/problems/reverse-linked-list/)
- [Delete Node in a Linked List](https://leetcode.com/problems/delete-node-in-a-linked-list/)
- [Next Greater Element I](https://leetcode.com/problems/next-greater-element-i/)
- [Delete Nodes From Linked List Present in Array](https://leetcode.com/problems/delete-nodes-from-linked-list-present-in-array/)
