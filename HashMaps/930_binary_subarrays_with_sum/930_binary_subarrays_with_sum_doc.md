# 930. Binary Subarrays With Sum

## Difficulty
Medium

## Topic
- Array
- Hash Map
- Staff
- Sliding window
- Prefix Sum

---

## Idea

[View Submission on LeetCode](https://leetcode.com/submissions/detail/2083102876/)

Traverse through the array, and compute the presum. 
Store frequency of seen presums inside a vecor of int.
if presum - goal > 0 
search for the freq of presum - goal and add it to the count, its simply the number of possible subarrays, 
repeat this for all the elements and finally we get the total possible sub-arrays. 

---

## Time Complexity

O(n)

## Space Complexity

O(n)

---

## Key Learning

- similar problems done already

---

## Mistakes Made
- did this less than 3 mins, and forgot to include the initial 0 presum case. 

---

## Similar Problems
- Count Subarrays With Score Less Than K
- Ways to Split Array Into Good Subarrays
- Find All Possible Stable Binary Arrays I
- Find All Possible Stable Binary Arrays II

## Date
2026-07-27
