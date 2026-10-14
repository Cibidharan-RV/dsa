# [203. Remove Linked List Elements](https://leetcode.com/problems/remove-linked-list-elements/)

## Date
2026-10-14

## Difficulty
Easy

## Topics
- Linked List
- Recursion

---

## Idea

[View Submission on LeetCode](https://leetcode.com/problems/remove-linked-list-elements/submissions/2172062253)

- Create a dummy node `preHead` pointing to the original head. This handles cases where the head itself or multiple leading nodes must be removed.
- Traverse the list using `curr`, checking `curr.next` instead of `curr` so the previous node can directly unlink a matching node.
- If `curr.next.val == val`, bypass that node by setting `curr.next = curr.next.next`. Do not advance `curr` in this case, because the new next node might also need removal.
- If the next node does not match `val`, advance `curr` to `curr.next`.
- Continue until `curr` or `curr.next` becomes null, then return `preHead.next` as the updated list head.

---

## Time Complexity

`O(n)`, where n is the number of nodes. Each node is examined at most once.

## Space Complexity

`O(1)` auxiliary space because only a fixed number of node references are used, with no additional data structure.

---

## Key Learning

- A **dummy node** simplifies linked-list deletion when the original head may be removed.
- When deleting nodes through a previous pointer, do not advance that pointer after deletion; consecutive matching nodes must be checked.
- Updating links is sufficient to remove nodes; no separate traversal or collection is needed.

---

## Similar Problems

- [Remove Element](https://leetcode.com/problems/remove-element/)
- [Delete Node in a Linked List](https://leetcode.com/problems/delete-node-in-a-linked-list/)
- [Delete the Middle Node of a Linked List](https://leetcode.com/problems/delete-the-middle-node-of-a-linked-list/)
- [Delete Nodes From Linked List Present in Array](https://leetcode.com/problems/delete-nodes-from-linked-list-present-in-array/)
- [Convert Doubly Linked List to Array I](https://leetcode.com/problems/convert-doubly-linked-list-to-array-i/)
- [Convert Doubly Linked List to Array II](https://leetcode.com/problems/convert-doubly-linked-list-to-array-ii/)
