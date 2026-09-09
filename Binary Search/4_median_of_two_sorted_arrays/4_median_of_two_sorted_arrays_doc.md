# [4. Median of Two Sorted Arrays](https://leetcode.com/problems/median-of-two-sorted-arrays/)

## Date
2026-09-09

## Difficulty
Hard

## Topics
- Array
- Binary Search
- Divide and Conquer

---

## Idea

[View Submission on LeetCode](https://leetcode.com/problems/median-of-two-sorted-arrays/submissions/2136221037)

Use binary search on the partition position of the smaller array.

The partition divides both arrays into a left and right part such that the
left side contains half of the total elements.

Once the partition position in the first array is chosen, the partition
position in the second array is determined automatically.

A valid partition satisfies:

`left1 <= right2`
`left2 <= right1`

If `left1 > right2`, move the partition in the first array to the left.
Otherwise, move it to the right.

After finding a valid partition:
- For an odd total size, the median is the larger of the two left-side
  boundary elements.
- For an even total size, the median is the average of the larger left-side
  boundary and the smaller right-side boundary.

`get()` provides `INT_MIN` and `INT_MAX` for partitions at the boundaries,
avoiding separate boundary cases.

---

## Time Complexity

O(log(min(m, n)))

## Space Complexity

O(1)

---

## Key Learning

- The partition positions are dependent; only one of them needs to be
  binary-searched.
- The correctness of a partition can be determined using only the four
  boundary elements.
- Sentinel values simplify handling partitions at the beginning or end of
  an array.
- The smaller array should be used for the binary search to achieve
  `O(log(min(m, n)))`.

---

## Mistakes Made

- Couldn't do this problem, saw the solution before submission.
- Initially attempted to binary-search the partition positions of both
  arrays independently.
- The initial `isfine()` logic did not correctly account for the dependent
  partition positions.
- The final partition-based implementation was not solved independently;
  the standard approach was consulted.

---

## Similar Problems

- [Median of a Row Wise Sorted Matrix](https://leetcode.com/problems/median-of-a-row-wise-sorted-matrix/)
