# [141. Linked List Cycle](https://leetcode.com/problems/linked-list-cycle/)

## Date
2026-09-20

## Difficulty
Easy

## Topics
- Hash Table
- Linked List
- Two Pointers
- Floyd's Cycle Finding Algorithm

---

## Idea

[View Submission on LeetCode](https://leetcode.com/problems/linked-list-cycle/submissions/2147637507)

Use Floyd's Tortoise and Hare algorithm with two pointers.
The slow pointer moves one node at a time while the fast pointer moves two
nodes at a time.
If a cycle exists, both pointers eventually enter the cycle and meet at the
same node.
If no cycle exists, the fast pointer reaches null.

---

## Time Complexity

O(n)

## Space Complexity

O(1) $
 
$l
- The slow pointer advances by one node per iteration.
- The fast pointer advances by two nodes per iteration.
- A null check on fast and fast.next prevents accessing an invalid reference.
- When a cycle exists, the relative speed difference causes the two pointers
  to eventually meet.
- If fast reaches null, the linked list terminates and therefore has no cycle.

---

## Key Learning

- The slow pointer advances by one node per iteration.
- The fast pointer advances by two nodes per iteration.
- A null check on fast and fast.next prevents accessing an invalid reference.
- When a cycle exists, the relative speed difference causes the two pointers
  to eventually meet.
- If fast reaches null, the linked list terminates and therefore has no cycle.

---

## Mistakes Made

- Initially considered checking whether fast.next was equal to slow as an
  additional optimization.
- The standard slow == fast comparison is sufficient because Floyd's
  algorithm guarantees that the pointers meet when a cycle exists.

---

## Similar Problems

- [Linked List Cycle II](https://leetcode.com/problems/linked-list-cycle-ii/)
- [Happy Number](https://leetcode.com/problems/happy-number/)
