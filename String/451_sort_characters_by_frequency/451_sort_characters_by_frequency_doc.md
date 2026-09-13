# [451. Sort Characters By Frequency](https://leetcode.com/problems/sort-characters-by-frequency/)

## Date
2026-09-13

## Difficulty
Medium

## Topics
- Hash Table
- String
- Sorting
- Heap (Priority Queue)
- Bucket Sort
- Counting

---

## Idea

[View Submission on LeetCode](https://leetcode.com/problems/sort-characters-by-frequency/submissions/2140370958)

Count the frequency of every character using a fixed-size frequency array.
Store each character with its frequency in a vector of pairs, then sort the
distinct characters in descending order of frequency.
Append each character to the output according to its frequency.

---

## Time Complexity

O(n)

## Space Complexity

O(n), output size.

---

## Key Learning

- Sorting only the distinct characters avoids sorting all n characters.
- The fixed character range makes the frequency array constant in size.
- The output can be constructed directly from the sorted frequencies.

---

## Mistakes Made

- No major mistakes.

---

## Similar Problems

- [Top K Frequent Elements](https://leetcode.com/problems/top-k-frequent-elements/)
- [First Unique Character in a String](https://leetcode.com/problems/first-unique-character-in-a-string/)
- [Sort Array by Increasing Frequency](https://leetcode.com/problems/sort-array-by-increasing-frequency/)
- [Percentage of Letter in String](https://leetcode.com/problems/percentage-of-letter-in-string/)
- [Maximum Number of Pairs in Array](https://leetcode.com/problems/maximum-number-of-pairs-in-array/)
- [Node With Highest Edge Score](https://leetcode.com/problems/node-with-highest-edge-score/)
- [Most Frequent Even Element](https://leetcode.com/problems/most-frequent-even-element/)
- [Count Pairs Of Similar Strings](https://leetcode.com/problems/count-pairs-of-similar-strings/)
