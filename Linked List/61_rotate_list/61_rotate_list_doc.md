# [61. Rotate List](https://leetcode.com/problems/rotate-list/)

## Date
2026-09-19

## Difficulty
Medium

## Topics
- Linked List
- Two Pointers

---

## Idea

[View Submission on LeetCode](https://leetcode.com/problems/rotate-list/submissions/2146414584)

Traverse the linked list once to determine its length and locate the tail.
Reduce k using k % len because rotating by the list length produces the
original list.
Connect the tail to the head to temporarily form a circular list.
The new tail is len - k positions from the old tail.
Move to the new tail, set its next node as the new head, and break the circle.

---

## Time Complexity

O(n)

## Space Complexity

O(1) $
 
$l
- Rotating by len positions has no effect, so k can be reduced using k % len.
- Making the list circular allows the last k nodes to move to the front without
  creating or copying any nodes.
- After forming the circle, len - k movements from the old tail reach the new
  tail.
- Breaking the link after the new tail restores a normal singly linked list.

---

## Key Learning

- Rotating by len positions has no effect, so k can be reduced using k % len.
- Making the list circular allows the last k nodes to move to the front without
  creating or copying any nodes.
- After forming the circle, len - k movements from the old tail reach the new
  tail.
- Breaking the link after the new tail restores a normal singly linked list.

---

## Mistakes Made

- Considered trying to perform the entire operation during a single traversal.
- The list length is unknown initially, so k cannot be reduced with k % len
  until the length has been determined.
- A second traversal after finding the length does not change the complexity:
  O(n) + O(n) is still O(n).

---

## Similar Problems

- [Rotate Array](https://leetcode.com/problems/rotate-array/)
- [Split Linked List in Parts](https://leetcode.com/problems/split-linked-list-in-parts/)
