# [83. Remove Duplicates from Sorted List](https://leetcode.com/problems/remove-duplicates-from-sorted-list/)

## Date
2026-10-16

## Difficulty
Easy

## Topics
- Linked List

---

## Idea

[View Submission on LeetCode](https://leetcode.com/problems/remove-duplicates-from-sorted-list/submissions/2173728806)

- The linked list is sorted, so duplicate values appear next to each other.
- Traverse the list using `cur` and compare each node with `cur.next`.
- If both values are equal, skip the next node by updating `cur.next` to `cur.next.next`. Keep `cur` in place because another duplicate may follow.
- If the values differ, advance `cur` to the next node.
- Stop when `cur` or `cur.next` is null. Return `head`, which remains the start of the modified list.

---

## Time Complexity

`O(n)`, where n is the number of nodes. Each node is visited at most once because `cur` advances only when adjacent values differ.

## Space Complexity

`O(1)` auxiliary space because duplicate nodes are removed by changing links, without creating additional data structures.

---

## Key Learning

- A **sorted list** allows duplicates to be detected by comparing adjacent nodes.
- When removing duplicates in place, keep the current pointer stationary after deletion so consecutive duplicates can also be removed.
- Changing `cur.next` modifies the list links without needing to move or update the head.

---

## Similar Problems

- [Remove Duplicates from Sorted List II](https://leetcode.com/problems/remove-duplicates-from-sorted-list-ii/)
- [Remove Duplicates From an Unsorted Linked List](https://leetcode.com/problems/remove-duplicates-from-an-unsorted-linked-list/)
