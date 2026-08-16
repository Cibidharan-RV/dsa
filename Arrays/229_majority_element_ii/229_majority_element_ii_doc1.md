# [229. Majority Element II](https://leetcode.com/problems/majority-element-ii/)

## Date
2026-08-16

## Difficulty
Medium

## Topics
- Array
- Hash Table
- Sorting
- Counting
- Boyer–Moore Majority Vote Algorithm

---

## Idea

[View Submission on LeetCode](https://leetcode.com/problems/majority-element-ii/submissions/2109326850)

There can be at most two elements that occur more than n/3 times.
Use Boyer-Moore Voting to keep two possible candidates and their counts.

- If the current value matches a candidate, increase its count.
- If a candidate has zero count, replace it with the current value.
- Otherwise, decrease both counts because three different values can cancel
  each other out.

After finding the candidates, traverse the array again to verify their actual
frequencies.

The main idea is:
> Cancel groups of three different elements; an element occurring more than n/3
  times cannot be completely cancelled.

---

## Time Complexity

O(n)

## Space Complexity

O(1)

---

## Key Learning

- At most two elements can occur more than n/3 times.
- Candidates found during voting must be verified in a second pass.
- Keep two candidates because the threshold is n/3.

---

## Mistakes Made

- Learned Boyer-Moore Voting Algorithm II.
- Hash map is unnecessary when the number of possible majority elements is bounded.

---

## Similar Problems

- [Majority Element](https://leetcode.com/problems/majority-element/)
- [Check If a Number Is Majority Element in a Sorted Array](https://leetcode.com/problems/check-if-a-number-is-majority-element-in-a-sorted-array/)
- [Most Frequent Even Element](https://leetcode.com/problems/most-frequent-even-element/)
