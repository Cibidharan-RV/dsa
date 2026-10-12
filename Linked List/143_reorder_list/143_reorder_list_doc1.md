# [143. Reorder List](https://leetcode.com/problems/reorder-list/)

## Date
2026-10-12

## Difficulty
Medium

## Topics
- Linked List
- Two Pointers
- Stack
- Recursion

---

## Idea

[View Submission on LeetCode](https://leetcode.com/problems/reorder-list/submissions/2170280381)

- Find the middle of the list using slow and fast pointers. When the loop ends, `slow` points to the middle for odd-length lists or the first half's last node for even-length lists.
- Split the list by storing `slow.next` as the second half's head and setting `slow.next = null`.
- Reverse the second half iteratively using `curr`, `prev`, and `nextnode`. After reversal, `prev` points to the new head of the second half.
- Merge the two halves alternately. Save the next nodes of both halves before changing links, then connect the current first-half node to the current second-half node and the second-half node to the saved first-half node.
- Advance both pointers and repeat until the second half is exhausted. The original node values remain unchanged; only links are modified.

---

## Time Complexity

`O(n)`, where n is the number of nodes. Finding the middle, reversing the second half, and merging the halves each take linear time.

## Space Complexity

`O(1)` auxiliary space because the algorithm uses a fixed number of pointers and modifies the existing nodes without recursion or an additional collection.

---

## Key Learning

- Slow and fast pointers find the middle in one traversal.
- Reversing a linked-list segment requires saving the next node before changing the current link.
- Save both merge pointers before rewiring links to avoid losing access to either half.
- Iterative pointer manipulation uses constant auxiliary space, unlike recursive traversal, which requires a call stack.

---

## Similar Problems

- [Delete the Middle Node of a Linked List](https://leetcode.com/problems/delete-the-middle-node-of-a-linked-list/)
- [Take K of Each Character From Left and Right](https://leetcode.com/problems/take-k-of-each-character-from-left-and-right/)
