# 49. Group Anagrams

## Difficulty
Medium

## Topic
- Array
- Hash Map
- String
- Sorting

---

## Idea

sorting Anagrams will give identical string, keeping that sorted string as key in a unordered map, store any string with that key.
As a result, we will get the Anagrams grouped, now move all the mapped vectors into a new vector and return.
---

## Time Complexity

O(N * K logK)

## Space Complexity

O(N * K)

---

## Mistakes Made

- initially did ascii calculations to group and check all the strings with similar ascii sum
- inefficient, higher time Complexity

---

## Similar Problems
