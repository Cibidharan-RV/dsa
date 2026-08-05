# 349. Intersection of Two Arrays

## Difficulty
Easy

## Topic
- Array
- Hash Table
- Two Pointers
- Binary Search
- Sorting

---

## Idea

Traverese through the first array and mark an unique identifier, and traverse through the second and if the number is marked as seen in first array mark it as common.
finally traverse through the marked array, and add the number to the output vector if marked as seen from the second array. 
---

## Time Complexity

O(N * M)

## Space Complexity

O(1)

---