# [725. Split Linked List in Parts](https://leetcode.com/problems/split-linked-list-in-parts/)

## Date
2026-10-24

## Difficulty
Medium

## Topics
- Linked List

---

## Idea

[View Submission on LeetCode](https://leetcode.com/problems/split-linked-list-in-parts/submissions/2180697834)

Count nodes and calculate the base size and extra nodes.
Give one extra node to each of the first `lar` parts.

Use `headI` as the part's start and advance `endI` by `partSize - 1` steps.
Save the next node before disconnecting the part.
Store each part's head in the result array.

---

## Time Complexity

`O(n + k)`, where n is the number of nodes and k is the number of parts.

## Space Complexity

`O(1)` auxiliary space, excluding the result array, which uses `O(k)` space.

---

## Key Learning

- Division gives the base size; remainder determines extra nodes.
- Starting at the first node requires `partSize - 1` advances to reach the last node.
- Save the next node before disconnecting a segment.
- When `k > n`, the remaining parts must be null.

---

## Mistakes Made

- Used an incorrect part-size expression that reduced sizes instead of distributing extra nodes.
- Set `seg = 1` when `n <= k`, causing oversized parts. Using `n / k` and `n % k` uniformly handles both cases.
- Advanced the endpoint the wrong number of times; starting at the first node requires `partSize - 1` advances.
- Initialized the endpoint with `headI.next` for larger parts, complicating traversal. Starting at `headI` keeps the logic consistent.
- Needed to save `endI.next` before disconnecting the current part to preserve access to the remaining list.

---

## Similar Problems

- [Rotate List](https://leetcode.com/problems/rotate-list/)
- [Odd Even Linked List](https://leetcode.com/problems/odd-even-linked-list/)
- [Split a Circular Linked List](https://leetcode.com/problems/split-a-circular-linked-list/)
