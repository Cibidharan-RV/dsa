# [75. Sort Colors](https://leetcode.com/problems/sort-colors/)

## Difficulty
Medium

## Topic
- Array
- Two Pointers
- Sorting
- Quicksort
- Bubble Sort

---

## Idea
maintain a pointer as current_insert (initially 0), which will point to the index where the next color should be inserted
for all three colors. 
- iterate through the loop, if seen the current searching color.
- swap it to the current_insert pointer.
- increment current_insert pointer.
repeat for next colors

[Click here to see the submission](https://leetcode.com/problems/sort-colors/submissions/2097351499)

---

## Time Complexity

O(n)

## Space Complexity

O(1)

---

## Key Learning

- Two Pointer for in-place transformations

---

## Mistakes Made

- Nothing, got optimal solution in first try (10 mins)

---

## Similar Problems

- Sort List
- Wiggle Sort
- Wiggle Sort II
