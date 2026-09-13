# [242. Valid Anagram](https://leetcode.com/problems/valid-anagram/)

## Date
2026-09-13

## Difficulty
Easy

## Topics
- Hash Table
- String
- Sorting

---

## Idea

[View Submission on LeetCode](https://leetcode.com/problems/valid-anagram/submissions/2140332214)

Check that both strings have the same length.
Use a frequency array of size 26 to track the difference in character counts.
For every position, increment the count for the character from s and decrement
the count for the corresponding character from t.
If every frequency returns to zero, both strings contain exactly the same
characters with the same frequencies and are therefore anagrams.

---

## Time Complexity

O(n)

## Space Complexity

O(1)

---

## Key Learning

- Comparing character frequencies is sufficient to determine whether two
  strings are anagrams.
- Incrementing for one string and decrementing for the other allows both
  frequency counts to be maintained in a single pass.
- Since there are only 26 lowercase English letters, the frequency array
  requires constant auxiliary space.

---

## Mistakes Made

- No major mistakes.

---

## Similar Problems

- [Group Anagrams](https://leetcode.com/problems/group-anagrams/)
- [Palindrome Permutation](https://leetcode.com/problems/palindrome-permutation/)
- [Find All Anagrams in a String](https://leetcode.com/problems/find-all-anagrams-in-a-string/)
- [Find Resultant Array After Removing Anagrams](https://leetcode.com/problems/find-resultant-array-after-removing-anagrams/)
