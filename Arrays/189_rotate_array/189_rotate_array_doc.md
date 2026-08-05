# 189. Rotate  Array

## Difficulty
Medium

## Topic
- Array

---

## Idea

take modulo for k 
and copy the array from 0 to n - k th location and insert in behind the array, and erase the first one.
---

## Time Complexity

O(n)

## Space Complexity

O(n)

---

## Mistakes Made

- Initially used for loop to copy and inserted each element. which increased the time.
- This isn't the optimal solution.

---

## Similar Problems

- Rotate List
- Reverse Words in a String II (premium)
- Make K-Subarray Sums Equal
- Maximum Number of Matching Indices After Right Shifts (premium)
