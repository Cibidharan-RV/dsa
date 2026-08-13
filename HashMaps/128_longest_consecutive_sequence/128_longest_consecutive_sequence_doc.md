# 128. Longest Consecutive Sequence

## Difficulty
Medium

## Topic
- Array
- Hash Table
- Union-Find
---

## Idea

[View Submission on LeetCode](https://leetcode.com/submissions/detail/2073963548/)

copy the given vector to an unordered_set for O(1) lookups, 
traverse $x through the set $ns, check if $x-1 exists in the set, skip it no processing, if not then it should be the starting point of the sequence, thus start searching for $x+... in the set until u wont find the next num. here the number of times we have found $x+... is the count of the seq, find the longest of them and return it.
---

## Time Complexity

O(n)

## Space Complexity

O(n)

---

## Key Learning

- unordered_set for O(1) lookup

---

## Mistakes Made

- tried to use unordered_map, which is costlier.
- accidentally saw the algo from chatgpt while normal discussion.
---


## Date
2026-07-20
