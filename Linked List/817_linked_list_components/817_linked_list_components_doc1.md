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

[View Submission on LeetCode](https://leetcode.com/problems/linked-list-components/submissions/2178615178)

- Store all values from `nums` in a `HashSet` to support average constant-time membership checks.
- Traverse the linked list using an outer `while` loop. If the current node belongs to the set, increment `count` to record a new connected component.
- Use the first inner loop to skip all consecutive selected nodes belonging to the current component.
- Use the second inner loop to skip all consecutive unselected nodes until the next selected segment is reached.
- Repeat until the list ends. Each selected segment contributes exactly one to `count`, regardless of how many consecutive selected nodes it contains.
- If traversal reaches the end during either inner loop, return the accumulated component count.

---

## Time Complexity

`O(n + m)` average time, where `n` is the number of linked-list nodes and `m` is `nums.length`. Building the set takes `O(m)` average time, and the inner loops collectively traverse each list node at most once, taking `O(n)` average time for membership checks.

## Space Complexity

`O(m)` auxiliary space for the `HashSet`, where `m` is `nums.length`.

---

## Key Learning

- **Segment-based traversal** can process consecutive elements with the same property as a group instead of handling each element separately in the outer loop.
- When nested loops advance the same traversal pointer without moving it backward, their combined work can remain linear.
- A hash set enables average `O(1)` membership checks when determining whether each node belongs to a selected group.

---

## Similar Problems

- [Merge Nodes in Between Zeros](https://leetcode.com/problems/merge-nodes-in-between-zeros/)
