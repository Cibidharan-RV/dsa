# [876. Middle of the Linked List](https://leetcode.com/problems/middle-of-the-linked-list/)

## Date
2026-09-20

## Difficulty
Easy

## Topics
- Linked List
- Two Pointers

---

## Idea

[View Submission on LeetCode](https://leetcode.com/problems/middle-of-the-linked-list/submissions/2147363799)

Use two pointers, slow and fast, to locate the middle of the linked list.
The slow pointer moves one node at a time while the fast pointer moves two
nodes at a time.

---

## Time Complexity

O(n)

## Space Complexity

O(1) $
 
$l
- The fast pointer traverses twice as quickly as the slow pointer.
- When fast reaches the end of the list, slow is positioned around the middle.
- For an even number of nodes, the problem requires the second middle node.
- No additional data structure is required because only pointer references
  are maintained.

---

## Key Learning

- The fast pointer traverses twice as quickly as the slow pointer.
- When fast reaches the end of the list, slow is positioned around the middle.
- For an even number of nodes, the problem requires the second middle node.
- No additional data structure is required because only pointer references
  are maintained.

---

## Mistakes Made

- Initially used fast = head.next and an additional condition after the loop
  to handle even-length lists.
- The unnecessary debug output was removed.

---

## Similar Problems

- [Delete the Middle Node of a Linked List](https://leetcode.com/problems/delete-the-middle-node-of-a-linked-list/)
- [Maximum Twin Sum of a Linked List](https://leetcode.com/problems/maximum-twin-sum-of-a-linked-list/)
