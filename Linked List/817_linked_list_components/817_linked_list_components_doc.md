# [817. Linked List Components](https://leetcode.com/problems/linked-list-components/)

## Date
2026-10-22

## Difficulty
Medium

## Topics
- Array
- Hash Table
- Linked List

---

## Idea

[View Submission on LeetCode](https://leetcode.com/problems/linked-list-components/submissions/2178600352)

- Store every value in `nums` in a `HashSet` for average `O(1)` membership checks.
- Traverse the linked list while maintaining an `in` flag that indicates whether the previous node belongs to an ongoing component.
- When the current node belongs to the set and `in` is false, a new component begins. Increment `count` and set `in` to true.
- When the current node does not belong to the set, reset `in` to false so a later selected node can start another component.
- Consecutive selected nodes are counted as one component because `in` remains true until an unselected node is encountered.

---

## Time Complexity

`O(n + m)` average time, where `n` is the number of linked-list nodes and `m` is `nums.length`. Building the set takes `O(m)` average time, and traversing the linked list takes `O(n)` average time.

## Space Complexity

`O(m)` auxiliary space for the `HashSet`, where `m` is `nums.length`.

---

## Key Learning

- A **hash set** supports average `O(1)` membership checks, avoiding repeated linear searches through an array.
- A boolean flag can track whether the traversal is currently inside a contiguous group satisfying a condition.
- Count transitions into a valid group rather than counting every valid element when consecutive elements belong to the same group.

---

## Similar Problems

- [Merge Nodes in Between Zeros](https://leetcode.com/problems/merge-nodes-in-between-zeros/)
