# [206. Reverse Linked List](https://leetcode.com/problems/reverse-linked-list/)

## Date
2026-09-20

## Difficulty
Easy

## Topics
- Linked List
- Recursion

---

## Idea

[View Submission on LeetCode](https://leetcode.com/problems/reverse-linked-list/submissions/2147396458)

Reverse the linked list in place by changing the next reference of each
existing node.
Maintain three references: prev for the already reversed portion, head for
the headrent node, and next to preserve the unreversed portion before changing
head.next.
After reversing the headrent link, move all three references forward.
When head becomes null, prev points to the new head.

---

## Time Complexity

O(n)

## Space Complexity

O(1) $
 
$l
- Each node is visited exactly once.
- No new ListNode objects are created.
- next must be saved before changing head.next, otherwise the remaining
  unreversed list would be lost.
- prev becomes the new head after the final iteration.
- The original list is modified directly rather than constructing a copy.

---

## Key Learning

- Each node is visited exactly once.
- No new ListNode objects are created.
- next must be saved before changing head.next, otherwise the remaining
  unreversed list would be lost.
- prev becomes the new head after the final iteration.
- The original list is modified directly rather than constructing a copy.

---

## Mistakes Made

- Initially created a new ListNode for every element, requiring O(n) space.
- Replaced node creation with in-place modification of the existing next
  references.

---

## Similar Problems

- [Reverse Linked List II](https://leetcode.com/problems/reverse-linked-list-ii/)
- [Binary Tree Upside Down](https://leetcode.com/problems/binary-tree-upside-down/)
- [Palindrome Linked List](https://leetcode.com/problems/palindrome-linked-list/)
- [Reverse Nodes in Even Length Groups](https://leetcode.com/problems/reverse-nodes-in-even-length-groups/)
- [Maximum Twin Sum of a Linked List](https://leetcode.com/problems/maximum-twin-sum-of-a-linked-list/)
- [Remove Nodes From Linked List](https://leetcode.com/problems/remove-nodes-from-linked-list/)
- [Insert Greatest Common Divisors in Linked List](https://leetcode.com/problems/insert-greatest-common-divisors-in-linked-list/)
