# [5. Longest Palindromic Substring](https://leetcode.com/problems/longest-palindromic-substring/)

## Date
2026-09-15

## Difficulty
Medium

## Topics
- Two Pointers
- String
- Dynamic Programming
- Manacher

---

## Idea

[View Submission on LeetCode](https://leetcode.com/problems/longest-palindromic-substring/submissions/2142922043)

Treat every position as the center of an odd-length palindrome and every
pair of adjacent positions as the center of an even-length palindrome.
Expand left and right while the characters match.
For every valid expansion, update the longest palindrome using its starting
index and length.
Finally, return the longest palindromic substring using substr().

---

## Time Complexity

O(n^2)

## Space Complexity

O(1) $
 
$l
- Every palindrome can be represented by either one center character or
  two adjacent center characters.
- Expanding from the center avoids checking every possible substring.
- The same expansion logic handles both odd and even length palindromes.

---

## Key Learning

- Every palindrome can be represented by either one center character or
  two adjacent center characters.
- Expanding from the center avoids checking every possible substring.
- The same expansion logic handles both odd and even length palindromes.

---

## Mistakes Made

- No major mistakes.

---

## Similar Problems

- [Shortest Palindrome](https://leetcode.com/problems/shortest-palindrome/)
- [Palindrome Permutation](https://leetcode.com/problems/palindrome-permutation/)
- [Palindrome Pairs](https://leetcode.com/problems/palindrome-pairs/)
- [Longest Palindromic Subsequence](https://leetcode.com/problems/longest-palindromic-subsequence/)
- [Palindromic Substrings](https://leetcode.com/problems/palindromic-substrings/)
- [Maximum Number of Non-overlapping Palindrome Substrings](https://leetcode.com/problems/maximum-number-of-non-overlapping-palindrome-substrings/)
