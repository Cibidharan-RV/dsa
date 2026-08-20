# [56. Merge Intervals](https://leetcode.com/problems/merge-intervals/)

## Date
2026-08-20

## Difficulty
Medium

## Topics
- Array
- Sorting
- Quicksort

---

## Idea

[View Submission on LeetCode](https://leetcode.com/problems/merge-intervals/submissions/2113626723)

Use the bounded endpoint constraint (`0 <= endpoint <= 10^4`) to build a
difference array.

For every interval `[start, end]`:
- `line[start] += 1` because an interval starts there.
- `line[end] -= 1` because an interval ends there.
- Keep zero-length intervals separately because `[x,x]` has a net change of `0`.

While traversing the coordinates, maintain `o`, the number of currently
active intervals.

- `o > 0` means we are inside a merged interval.
- `o == 0` means all active intervals have ended.
- When `o` changes from `0` to positive, start a merged interval.
- When `o` becomes `0`, close the merged interval.

The main idea is:

> Use a difference array to track how many intervals are active at each
> coordinate, and record the boundaries whenever the active count changes
> between zero and positive.

---

## Time Complexity

O(n + C) — because the endpoint range is bounded by C `10^4`, so the coordinate
scan is constant with respect to `n`.

## Space Complexity

O(10^4) = O(1)

---

## Key Learning

- A difference array can represent interval overlap using `+1` at the start
  and `-1` at the end.
- Multiple intervals can start or end at the same coordinate, so events must
  be accumulated rather than overwritten.
- A zero-length interval `[x,x]` has a net difference of `0`, so it needs to
  be tracked separately.

---

## Mistakes Made

- Initially tried representing each coordinate as only start/end/both, which
  failed when multiple intervals started at the same coordinate.
- Initially used an `unordered_set` for zero-length intervals; replacing it
  with direct indexing using the bounded coordinate range reduced the runtime.

---

## Similar Problems

- [Insert Interval](https://leetcode.com/problems/insert-interval/)
- [Meeting Rooms](https://leetcode.com/problems/meeting-rooms/)
- [Meeting Rooms II](https://leetcode.com/problems/meeting-rooms-ii/)
- [Teemo Attacking](https://leetcode.com/problems/teemo-attacking/)
- [Add Bold Tag in String](https://leetcode.com/problems/add-bold-tag-in-string/)
- [Range Module](https://leetcode.com/problems/range-module/)
- [Employee Free Time](https://leetcode.com/problems/employee-free-time/)
- [Partition Labels](https://leetcode.com/problems/partition-labels/)
- [Interval List Intersections](https://leetcode.com/problems/interval-list-intersections/)
- [Amount of New Area Painted Each Day](https://leetcode.com/problems/amount-of-new-area-painted-each-day/)
- [Longest Substring of One Repeating Character](https://leetcode.com/problems/longest-substring-of-one-repeating-character/)
- [Count Integers in Intervals](https://leetcode.com/problems/count-integers-in-intervals/)
- [Divide Intervals Into Minimum Number of Groups](https://leetcode.com/problems/divide-intervals-into-minimum-number-of-groups/)
- [Determine if Two Events Have Conflict](https://leetcode.com/problems/determine-if-two-events-have-conflict/)
- [Count Ways to Group Overlapping Ranges](https://leetcode.com/problems/count-ways-to-group-overlapping-ranges/)
- [Points That Intersect With Cars](https://leetcode.com/problems/points-that-intersect-with-cars/)
- [Count Days Without Meetings](https://leetcode.com/problems/count-days-without-meetings/)
- [Minimize Connected Groups by Inserting Interval](https://leetcode.com/problems/minimize-connected-groups-by-inserting-interval/)
