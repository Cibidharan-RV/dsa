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

[View Submission on LeetCode](https://leetcode.com/problems/majority-element-ii/submissions/2109317838)

Keep a hasmap `count` which stores freq of each element, and a `ans` array.
- if freq exceeds floor(n/3) add it to ans array
- At most two elements can occur more than n/3 times, so return `ans` once two are found.
- if traversed through whole array return ans.

---

## Time Complexity

O(n)

## Space Complexity

O(n)

---

## Mistakes Made

- nothing.

---

## Similar Problems

- [Majority Element](https://leetcode.com/problems/majority-element/)
- [Check If a Number Is Majority Element in a Sorted Array](https://leetcode.com/problems/check-if-a-number-is-majority-element-in-a-sorted-array/)
- [Most Frequent Even Element](https://leetcode.com/problems/most-frequent-even-element/)
