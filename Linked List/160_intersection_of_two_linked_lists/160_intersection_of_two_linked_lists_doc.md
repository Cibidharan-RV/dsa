# [160. Intersection of Two Linked Lists](https://leetcode.com/problems/intersection-of-two-linked-lists/)

## Date
2026-10-13

## Difficulty
Easy

## Topics
- Hash Table
- Linked List
- Two Pointers

---

## Idea

[View Submission on LeetCode](https://leetcode.com/problems/intersection-of-two-linked-lists/submissions/2171008188)

- Traverse both lists simultaneously, comparing node references at each position. If the references match, return that node because it is the intersection.
- Count the number of nodes traversed in both lists together. When either pointer reaches null, use this shared count as the initial length for both lists.
- Continue traversing whichever list has remaining nodes, updating its length. This calculates the complete lengths of both lists without restarting from the heads.
- If List A is longer than List B, swap the head references and their lengths so that `headA` refers to the shorter list and `headB` to the longer list.
- Advance `headB` by the difference between the lengths. Both pointers now have the same number of nodes remaining until the end.
- Traverse both lists together, comparing node references rather than node values. Return the first matching reference, or null if no intersection exists.

---

## Time Complexity

`O(m + n)`, where m and n are the lengths of the two lists. Length calculation, pointer alignment, and the final comparison each take at most linear time.

## Space Complexity

`O(1)` auxiliary space because only a fixed number of pointers and integer counters are used. No additional collection or nodes are created.

---

## Key Learning

- Linked-list intersection requires comparing node references, not node values.
- Two lists with unequal lengths can be aligned by advancing the pointer in the longer list by the length difference.
- Length counting can be combined with simultaneous traversal to avoid calculating both lengths in separate full traversals.
- When both pointers have equal remaining distances to the end, advancing them together guarantees that a shared node is encountered at the same iteration.

---

## Similar Problems

- [Minimum Index Sum of Two Lists](https://leetcode.com/problems/minimum-index-sum-of-two-lists/)
