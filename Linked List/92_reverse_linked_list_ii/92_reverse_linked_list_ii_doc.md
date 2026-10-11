# [92. Reverse Linked List II](https://leetcode.com/problems/reverse-linked-list-ii/)

## Date
2026-10-11

## Difficulty
Medium

## Topics
- Linked List

---

## Idea

[View Submission on LeetCode](https://leetcode.com/problems/reverse-linked-list-ii/submissions/2169159706)

- Use a dummy node before the head so that reversing a section beginning at position 1 can be handled without a separate case.
- Move `start` to the node immediately before position `left`. Set `curr = start.next` to begin reversing the required section.
- Calculate the number of nodes to reverse as `right - left + 1`. Reverse exactly that many nodes using `prev`, `curr`, and `next`. After the loop, `prev` points to the new head of the reversed section, while `curr` points to the first node after the section.
- The original first node of the section, stored in `end`, becomes its tail. Connect `start.next = prev` to attach the prefix to the reversed section, then connect `end.next = curr` to attach the untouched suffix.
- Return `dummy.next` to obtain the updated list, including when the reversal begins at the original head.

---

## Time Complexity

`O(n)`, where n is the number of nodes in the list. Finding the node before `left` takes at most O(n) time, and reversing at most n nodes takes O(n) time.

## Space Complexity

`O(1)` auxiliary space because the algorithm uses a fixed number of node references and counters, without allocating additional nodes proportional to the input size.

---

## Key Learning

- A **dummy node** simplifies linked-list operations when the head might change.
- Reversing a section requires preserving three parts: the prefix, the section being reversed, and the suffix.
- The original first node of a reversed section becomes its tail.
- Using `right - left + 1` as a fixed reversal count separates the section length from traversal-position tracking.

---

## Similar Problems

- [Reverse Linked List](https://leetcode.com/problems/reverse-linked-list/)
