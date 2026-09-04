# [1539. Kth Missing Positive Number](https://leetcode.com/problems/kth-missing-positive-number/)

## Date
2026-09-04

## Difficulty
Easy

## Topics
- Array
- Binary Search

---

## Idea

[View Submission on LeetCode](https://leetcode.com/problems/kth-missing-positive-number/submissions/2130803666)

For each index `index`, compare the value at that position with the value
that would exist at that position if exactly `k` positive numbers were
missing before it.

`getValue()` returns the actual array value when `index` is inside the
array. For positions beyond the array, it continues the sequence from the
last array value.

The condition:

`getValue(arr, mid) >= mid + k + 1`

determines whether the kth missing positive number lies at or before the
current position.

- If the condition is true, move the search to the left.
- Otherwise, move the search to the right.

After the binary search, `low` represents the position where the kth
missing positive number belongs.

The answer can then be obtained as:

`low + k`

---

## Time Complexity

O(log n)

## Space Complexity

O(1)

---

## Key Learning

- The number of missing positive integers before an index can be determined
  from the difference between the value and its expected position.
- This missing-count relationship is monotonic, allowing binary search.
- The answer can be represented using the final binary-search position
  instead of explicitly counting missing numbers.
- Binary search boundaries can be maintained directly over array indices.

---

## Mistakes Made

- Initially used a separate `ans` variable and special cases for the
  binary-search boundaries.
- Initially used an extended search range and additional handling for
  positions beyond the array before simplifying the binary search to the
  actual array index range.

---

## Similar Problems

- [Append K Integers With Minimal Sum](https://leetcode.com/problems/append-k-integers-with-minimal-sum/)
