# [14. Longest Common Prefix](https://leetcode.com/problems/longest-common-prefix/)

## Date
2026-09-12

## Difficulty
Easy

## Topics
- Array
- String
- Trie

---

## Idea

[View Submission on LeetCode](https://leetcode.com/problems/longest-common-prefix/submissions/2139535049)

Start with the first string as the current prefix.
Compare each remaining string against this prefix and find the length of their
matching beginning.
Keep the smallest matching length in end across all strings.
If end becomes zero, return immediately because no common prefix exists.
Resize prefix once at the end to the shortest matching length.

---

## Time Complexity

O(S)

## Space Complexity

O(1)

---

## Key Learning

- The longest common prefix is limited by the shortest matching prefix found
  between the first string and every other string.
- Keeping only the minimum prefix length avoids repeatedly modifying prefix.
- Using a const reference avoids copying each string during comparison.

---

## Mistakes Made

- Initially compared strs[0] with itself.
- Initially used erase() repeatedly to shrink the prefix.
- Initially copied each string instead of using a const reference.

---

## Similar Problems

- [Smallest Missing Integer Greater Than Sequential Prefix Sum](https://leetcode.com/problems/smallest-missing-integer-greater-than-sequential-prefix-sum/)
- [Find the Length of the Longest Common Prefix](https://leetcode.com/problems/find-the-length-of-the-longest-common-prefix/)
- [Longest Common Suffix Queries](https://leetcode.com/problems/longest-common-suffix-queries/)
- [Longest Common Prefix After at Most One Removal](https://leetcode.com/problems/longest-common-prefix-after-at-most-one-removal/)
