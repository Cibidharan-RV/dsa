# 981. Time Based Key-Value Store

## Difficulty
Medium

## Topic
- Staff
- Hash Table
- String
- Binary Search
- Design
- Weekly Contest 121

---

## Idea

unordered_map< string(key) , map< int(timestamp), string(vlaue) > >

set() - inserting value, get the address of map pointed by key and then insert the value in the desired timestamp.
get() - if the key is present in the map, we get the upper_bound pointer of the timestamp, and if the pointer is pointing to the first element return empty str, else return the previous element's value.

---

## Time Complexity
L → len(str)

set() = O(L + log n)
get() = O(L + log n)

## Space Complexity

t → number of set operations
O(T)

---

## Key Learning

- String hasing takes time. O(L)
- Concepts of Map and Unordered map
---
