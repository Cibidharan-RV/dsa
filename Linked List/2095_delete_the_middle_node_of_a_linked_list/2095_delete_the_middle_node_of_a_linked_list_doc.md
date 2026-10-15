# [2095. Delete the Middle Node of a Linked List](https://leetcode.com/problems/delete-the-middle-node-of-a-linked-list/)

## Date
2026-10-15

## Difficulty
Medium

## Topics
- Linked List
- Two Pointers

---

## Idea

[View Submission on LeetCode](https://leetcode.com/problems/delete-the-middle-node-of-a-linked-list/submissions/2172822516)

- Use two pointers, `fast` and `slow`, to locate the middle node and its predecessor in one traversal.
- Initialize `slow` at a dummy node before `head` and `fast` at `head`. The dummy node simplifies handling the predecessor of the middle node.
- Move `fast` two nodes and `slow` one node per iteration. When `fast` reaches the end, `slow` points to the node immediately before the middle node.
- Delete the middle node by setting `slow.next = slow.next.next`, bypassing it in the linked list.
- Handle a single-node list separately because deleting its middle node leaves an empty list, so return `null`.

---

## Time Complexity

`O(n)`, where n is the number of nodes. The fast pointer advances two nodes per iteration, so the traversal takes linear time.

## Space Complexity

`O(1)` auxiliary space because only a fixed number of node references are used.

---

## Key Learning

- A **slow and fast pointer** technique can locate the middle of a linked list in one traversal.
- Starting `slow` at a dummy node can make it point to the predecessor of the middle, allowing deletion without a separate traversal.
- For even-length lists, the middle is the node at index `floor(n / 2)` using zero-based indexing, as required by this problem.

---

## Similar Problems

- [Remove Nth Node From End of List](https://leetcode.com/problems/remove-nth-node-from-end-of-list/)
- [Reorder List](https://leetcode.com/problems/reorder-list/)
- [Remove Linked List Elements](https://leetcode.com/problems/remove-linked-list-elements/)
- [Middle of the Linked List](https://leetcode.com/problems/middle-of-the-linked-list/)
