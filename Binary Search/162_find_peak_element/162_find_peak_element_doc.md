# [162. Find Peak Element](https://leetcode.com/problems/find-peak-element/)

## Date
2026-09-01

## Difficulty
Medium

## Topics
- Array
- Binary Search

---

## Idea

[View Submission on LeetCode](https://leetcode.com/problems/find-peak-element/submissions/2127000330)

Use binary search by comparing the current element with its immediate
neighbors.

Treat elements outside the array as `INT_MIN`, representing `-infinity`,
so boundary elements can also be peaks.

For each `mid`, there are four possible patterns:

- `previous < middle < next`:
  The array is increasing, so a peak must exist on the right.
- `previous > middle > next`:
  The array is decreasing, so a peak must exist on the left.
- `previous < middle > next`:
  `mid` itself is a peak, so return `mid`.
- `previous > middle < next`:
  `mid` is a valley. Compare the two neighboring elements and continue
  toward the larger side.

Handle arrays of size 1 and 2 separately.

The main idea is:

> A peak does not need to be found directly at `mid`; use the local slope
> to determine a direction in which a peak is guaranteed to exist, then
> discard the other half.

---

## Time Complexity

O(log n)

## Space Complexity

O(1)

---

## Key Learning

- Binary search does not require the array to be sorted; it only requires
  a property that allows half of the search space to be discarded.
- A strictly increasing sequence must eventually reach a peak or the
  boundary, which is treated as `-infinity`.
- A strictly decreasing sequence similarly guarantees a peak on the left.
- When `mid` is a valley, moving toward the larger neighbor guarantees
  that a peak exists in that direction.
- Boundary elements can be peaks because the outside elements are treated
  as `-infinity`.

---

## Mistakes Made

- Initially assumed binary search required a sorted array.
- Initially thought that finding a greater neighbor only identified the
  direction but did not prove that a peak existed there.
- Tested the reasoning with increasing sequences such as `[1,2,1,3,5,6,7]`
  and recognized that a greater neighbor guarantees the existence of a
  peak somewhere in that direction.

---

## Similar Problems

- [Peak Index in a Mountain Array](https://leetcode.com/problems/peak-index-in-a-mountain-array/)
- [Find a Peak Element II](https://leetcode.com/problems/find-a-peak-element-ii/)
- [Pour Water Between Buckets to Make Water Levels Equal](https://leetcode.com/problems/pour-water-between-buckets-to-make-water-levels-equal/)
- [Count Hills and Valleys in an Array](https://leetcode.com/problems/count-hills-and-valleys-in-an-array/)
- [Find the Peaks](https://leetcode.com/problems/find-the-peaks/)
