# [493. Reverse Pairs](https://leetcode.com/problems/reverse-pairs/)

## Date
2026-08-25

## Difficulty
Hard

## Topics
- Array
- Binary Search
- Divide and Conquer
- Binary Indexed Tree
- Segment Tree
- Merge Sort
- Ordered Set
- Treap

---

## Idea

[View Submission on LeetCode](https://leetcode.com/problems/reverse-pairs/submissions/2119157449)

Use merge sort to count reverse pairs while sorting the array.

For every merge step, the left half `[l, mid]` and right half
`[mid + 1, r]` are already sorted.

Before merging:

- Maintain a pointer `j` at the beginning of the right half.
- For every `nums[i]` in the left half, move `j` while
  `nums[i] > 2 * nums[j]`.
- Since both halves are sorted, `j` never moves backward.
- All elements before `j` in the right half form a reverse pair with
  `nums[i]`, so add `j - (mid + 1)` to `count`.

Then perform the normal merge of the two sorted halves.

Use `long long` for `2 * nums[j]` to avoid integer overflow.

The main idea is:

> Count the valid cross-half pairs before merging, using the sorted
> halves to advance the right pointer only once.

---

## Time Complexity

O(n log n)

## Space Complexity

O(n)

---

## Key Learning

- Merge sort and divide-and-conquer.
- Counting cross-half pairs using two pointers.
- Since the right pointer never moves backward, counting during each merge
  remains O(n).
- Use `long long` when multiplying values by 2.

---

## Mistakes Made

- Initially reset the right pointer for every element in the left half,
  making the counting phase O(n²) for a merge.
- Had boundary errors in the inclusive `[l, r]` merge implementation.

---

## Similar Problems

- [Count of Smaller Numbers After Self](https://leetcode.com/problems/count-of-smaller-numbers-after-self/)
- [Count of Range Sum](https://leetcode.com/problems/count-of-range-sum/)
