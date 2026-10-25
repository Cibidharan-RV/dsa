# [1669. Merge In Between Linked Lists](https://leetcode.com/problems/merge-in-between-linked-lists/)

## Date
2026-10-23

## Difficulty
Medium

## Topics
- Linked List

---

## Idea

[View Submission on LeetCode](https://leetcode.com/problems/merge-in-between-linked-lists/submissions/2179805673)

- Find the tail of `list2` by traversing until `list2.next == null`. Preserve the original head of `list2` in `start` so the entire second list can be connected.
- Traverse `list1` while tracking the current position with `i`, starting at 1.
- When `i == a`, connect the current node's `next` to `start`, inserting `list2` after the current node. Save the original next node before changing the connection so traversal can continue.
- When `i == b + 1`, connect the tail of `list2` to the node after the current node and stop traversing.
- Return `head`, which preserves the original head of `list1`.
- If `list2` is null, return `list1` unchanged.

---

## Time Complexity

`O(n + m)` time, where `n` is the number of nodes in `list1` and `m` is the number of nodes in `list2`. Finding the tail of `list2` takes `O(m)`, and traversing `list1` takes at most `O(n)`.

## Space Complexity

`O(1)` auxiliary space because only a constant number of pointers and an integer counter are used.

---

## Similar Problems

- 
