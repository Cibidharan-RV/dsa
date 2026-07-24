# 560. Subarray Sum Equals K

## Difficulty
Medium

## Topic
- Array
- Hash Map
- Prefix Sum

---

## Idea

Maintain a running prefix sum.

For every prefix sum:

- Check how many previous prefix sums equal `(currentPrefix - k)`.
- Every occurrence represents one valid subarray ending at the current index.
- Store the frequency of the current prefix sum in a hash map.

Initialize the hash map with `0 -> 1` to handle subarrays starting from index `0`.

---

## Time Complexity

O(n)

## Space Complexity

O(n)

---

## Key Learning

- Prefix sums can convert subarray sum problems into hash map lookups.
- Store the **frequency** of prefix sums, not just their existence.
- Initialize the map with `0 -> 1` to naturally handle subarrays starting at index `0`.
- `unordered_map[key]` returns `0` for unseen integer keys and inserts them automatically.

---

## Mistakes Made

- Initially used an `unordered_set`, which couldn't handle multiple occurrences of the same prefix sum.
- Checked both `prefix + k` and `prefix - k`; only `prefix - k` is required.
- Added unnecessary special cases (`nums[i] == k` and `presum == k`) instead of using `map[0] = 1`.
- Tried using a fixed-size vector for prefix sums, which caused out-of-bounds access because prefix sums are unbounded.
- Used `continue`, which skipped recording the current prefix sum.

---

## Similar Problems

- Continuous Subarray Sum (523)
- Binary Subarrays With Sum (930)
- Maximum Size Subarray Sum Equals k (325)
- Contiguous Array (525)