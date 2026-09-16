# [1781. Sum of Beauty of All Substrings](https://leetcode.com/problems/sum-of-beauty-of-all-substrings/)

## Date
2026-09-16

## Difficulty
Medium

## Topics
- Hash Table
- String
- Counting

---

## Idea

[View Submission on LeetCode](https://leetcode.com/problems/sum-of-beauty-of-all-substrings/submissions/2143739602)

For every starting index i, create a fresh frequency array and extend the
substring one character at a time.
Update the frequency of the newly added character and maintain maxFreq
directly in O(1).
For every substring, traverse the 26 frequency values to find the minimum
non-zero frequency.
The beauty of the substring is maxFreq - minFreq, which is added to ans.

---

## Time Complexity

O(n^2)

## Space Complexity

O(1) $
 
$l
- A fixed alphabet of 26 lowercase letters makes scanning the frequency
  array a constant-time operation.
- maxFreq only needs to be updated when a character is added, so it does not
  need another traversal of the frequency array.
- minFreq must ignore zero frequencies because only characters present in
  the current substring contribute to its beauty.

---

## Key Learning

- A fixed alphabet of 26 lowercase letters makes scanning the frequency
  array a constant-time operation.
- maxFreq only needs to be updated when a character is added, so it does not
  need another traversal of the frequency array.
- minFreq must ignore zero frequencies because only characters present in
  the current substring contribute to its beauty.

---

## Mistakes Made

- Initially tried to update minFreq directly using the newly added character,
  which does not correctly maintain the minimum frequency among all
  characters in the substring.

---

## Similar Problems

- [Substrings That Begin and End With the Same Letter](https://leetcode.com/problems/substrings-that-begin-and-end-with-the-same-letter/)
