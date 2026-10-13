# [142. Linked List Cycle II](https://leetcode.com/problems/linked-list-cycle-ii/)

## Date
2026-10-13

## Difficulty
Medium

## Topics
- Hash Table
- Linked List
- Two Pointers
- Floyd's Cycle Finding Algorithm

---

## Idea

[View Submission on LeetCode](https://leetcode.com/problems/linked-list-cycle-ii/submissions/2171070047)

- Use Floyd's cycle detection algorithm with two pointers, `slow` and `fast`, both initialized to `head`. Move `slow` one node and `fast` two nodes per iteration.
- If `fast` or `fast.next` becomes null, the list has no cycle, so return null.
- If `slow == fast`, a cycle exists and the pointers have met somewhere inside it.
- Reset the `head` pointer to the original head reference. Move `head` and `fast` one node at a time until they meet. Based on the distance relationship between the head, cycle entry, and meeting point, they meet exactly at the cycle entry.
- Return the meeting node, which is the starting node of the cycle. The `m` counter is unused and does not affect the algorithm.

---

## Time Complexity

`O(n)`, where n is the number of nodes before the cycle plus the number of nodes in the cycle. Cycle detection and locating the entry each take linear time in the worst case.

## Space Complexity

`O(1)` auxiliary space because only a constant number of pointers and integer variables are used.

---

## Key Learning

- Floyd's slow-fast pointer technique detects a cycle without storing visited nodes.
- A cycle's entry can be found by resetting one pointer to the head after the pointers meet, then moving both one node at a time.
- Compare node references using `==`, not node values, when detecting cycles and identifying the entry.
- The meeting point inside a cycle is not necessarily the cycle entry.

---

## Mistakes Made

- Do not confuse the distance travelled by `fast` with the number of nodes traversed by `slow`; `fast` advances two nodes per iteration.
- The `m` and `c` counters are unnecessary for Floyd's algorithm. The pointer relationship identifies the cycle entry without explicitly calculating distances or cycle length.

---

## Similar Problems

- [Linked List Cycle](https://leetcode.com/problems/linked-list-cycle/)
- [Find the Duplicate Number](https://leetcode.com/problems/find-the-duplicate-number/)
