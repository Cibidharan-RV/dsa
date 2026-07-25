# 525. Contiguous Array

## Difficulty

Medium

## Topic

- Array
- Hash Map
- Prefix Sum

---

## Idea

Maintain a running prefix sum representing the difference between the number of `1`s and `0`s.

- Treat `1` as `+1`
- Treat `0` as `-1`

If the same prefix sum appears again, the subarray between the two occurrences has an equal number of `0`s and `1`s.

Store the **first occurrence** of every prefix sum and update the maximum length whenever the same prefix sum is seen again.

---

## Time Complexity

O(n)

## Space Complexity

O(n)

---

## Key Learning

- Prefix sums are not limited to sums; they can represent any cumulative quantity.
- Transforming `0` into `-1` converts the problem into finding the longest subarray with sum `0`.
- For longest subarray problems, store the **first occurrence** of a prefix state.
- If the range of prefix sums is bounded, a `vector` is faster than an `unordered_map`.

---

## Mistakes Made

- Initially misunderstood the problem as requiring contiguous blocks of `0`s followed by `1`s.
- Tried a greedy two-pointer approach, which is not applicable because the condition is non-monotonic.
- Initially derived a different invariant (`2 × prefixOnes - index`) instead of transforming `0 → -1`. Later realized both are mathematically equivalent.
- Initially used `unordered_map`; later optimized to a `vector` after observing the bounded key range.

---

## Similar Problems

- Subarray Sum Equals K (560)
- Continuous Subarray Sum (523)
- Binary Subarrays With Sum (930)
- Maximum Size Subarray Sum Equals k (325)