# 523. Continuous Subarray Sum

## Difficulty
Medium

## Topics
- Senior Staff
- Array
- Hash Table
- Math
- Prefix Sum

---

## Idea

`if two numbers having same remainder when divided by a number(k) are subtracted the difference is divisible by the number(k)`

create a hash table mapping int to int

find the prefix sum, 

map[remainder of prefix sum] = index of  occurance of the prefix sum. 

if the remainder of the current prefix sum is there in the hash map, check if its index is far enough (>=2) if yes, return true.

if not after traversing through the array return false.
---

## Time Complexity

average: O(n)
worst(due to hash collisions): O(n^2)

## Space Complexity

O(min(n, k))

---

## Mistakes Made

- remainder 0 case, seen marking. used bool array, int array, vector int, finally unorderd_map
---
