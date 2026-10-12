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

[View Submission on LeetCode](https://leetcode.com/problems/reorder-list/submissions/2170264974)

- Use a `front` pointer initialized to the head and recursively traverse to the last node using `back`.
- Once the base case `back == null` is reached, process nodes while the recursive calls unwind. At this point, `back` visits nodes from the end toward the beginning, while `front` advances from the beginning toward the end.
- For each unwinding step, insert `back` immediately after `front`. Save `front.next` before changing links so the remaining front portion is not lost.
- Stop when `front == back` or `front.next == back`. These conditions indicate that the two pointers have met or are adjacent, so further reordering is unnecessary. Set `back.next = null` to terminate the list and prevent cycles.
- The `stop` flag prevents remaining recursive calls from modifying the list after reordering is complete.

---

## Time Complexity

`O(n)`, where n is the number of nodes. The recursion visits each node once, and each node requires constant work during unwinding.

## Space Complexity

`O(n)` auxiliary space because the recursive call stack can contain up to n calls. The `front` pointer and `stop` flag use O(1) additional space.

---

## Key Learning

- Recursion can process a linked list in reverse order during stack unwinding without explicitly reversing the list.
- Two pointers can coordinate operations from opposite ends: one advances through recursion, while the other advances through the original list.
- Save the next node before modifying links to avoid losing access to the remaining list.
- A termination condition is essential when rewiring linked lists; otherwise, cycles can form.

---

## Similar Problems

- [Delete the Middle Node of a Linked List](https://leetcode.com/problems/delete-the-middle-node-of-a-linked-list/)
- [Take K of Each Character From Left and Right](https://leetcode.com/problems/take-k-of-each-character-from-left-and-right/)
