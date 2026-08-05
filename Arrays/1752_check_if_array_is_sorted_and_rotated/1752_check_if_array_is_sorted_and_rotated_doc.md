# 1752. Check If Array is Sorted and Rotated

## Difficulty
Easy

## Topic
- Array
- mid level

---

## Idea

check how many times we see an element unintended order, 
if never found its already sorted.
if only once, we need to check if the return (first element is greater than the last element).
else return false.

---

## Time Complexity

O(n)

## Space Complexity

O(1)

---

## Mistakes Made

- tried to find the minimum and use rolling index to start from the minimum of the array. failed because of index error.

---

## Similar Problems

- [Check if all A's appears before all B's](https://leetcode.com/problems/check-if-all-as-appears-before-all-bs/)