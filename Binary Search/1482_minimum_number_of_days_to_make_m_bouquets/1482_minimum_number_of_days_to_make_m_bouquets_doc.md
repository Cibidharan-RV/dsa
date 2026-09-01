# [1482. Minimum Number of Days to Make m Bouquets](https://leetcode.com/problems/minimum-number-of-days-to-make-m-bouquets/)

## Date
2026-09-01

## Difficulty
Medium

## Topics
- Array
- Binary Search

---

## Idea

[View Submission on LeetCode](https://leetcode.com/problems/minimum-number-of-days-to-make-m-bouquets/submissions/2127226238)

For a given day, determine whether at least `m` bouquets of size `k` can
be formed.

Traverse the bloom-day array while maintaining the length of the current
consecutive sequence of flowers that have bloomed by `day`.

- If `d <= day`, the flower is available, so increment `fcount`.
- Once `fcount == k`, one bouquet can be formed. Increment `grps` and reset
  `fcount` to `0`, allowing the same consecutive sequence to be divided
  into multiple non-overlapping bouquets.
- If `d > day`, the consecutive sequence is broken, so reset `fcount`.
- Return immediately when `m` bouquets have been formed.

Binary search the possible days between the minimum and maximum bloom days.
If a day is sufficient, search for an earlier day; otherwise search later.

If `m * k` flowers cannot fit in the array, return `-1` immediately.

The main idea is:

> Binary search the minimum feasible day, using consecutive bloomed
> flowers to greedily form non-overlapping bouquets of size `k`.

---

## Time Complexity

O(n log D) where `D` is the range between the minimum and maximum bloom days.

## Space Complexity

O(1)

---

## Key Learning

- Binary search can be applied to a monotonic feasibility condition.
- Counting total bloomed flowers is not enough because each bouquet requires
  `k` adjacent flowers.
- A consecutive run can be greedily divided into non-overlapping groups of
  size `k`.
- Resetting `fcount` immediately after forming a bouquet avoids storing the
  entire run length.
- Checking `m * k > n` before binary search can eliminate impossible cases.

---

## Mistakes Made

- Initially counted the complete consecutive run and added `fcount / k`
  only when the run ended.
- Changed the check to form a bouquet immediately when `fcount == k`, which
  avoids unnecessary counting and allows early termination once `m` bouquets
  are formed.
- Added the `m * k > n` check to handle impossible cases before binary search.

---

## Similar Problems

- [Maximize the Confusion of an Exam](https://leetcode.com/problems/maximize-the-confusion-of-an-exam/)
- [Earliest Possible Day of Full Bloom](https://leetcode.com/problems/earliest-possible-day-of-full-bloom/)
