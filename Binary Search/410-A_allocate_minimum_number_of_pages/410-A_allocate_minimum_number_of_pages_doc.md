# [410-A. Allocate Minimum Number Of Pages](https://www.geeksforgeeks.org/problems/allocate-minimum-number-of-pages0937/1)

## Date
2026-09-08

## Difficulty
Medium

## Topics
- Binary Search

---

## Idea

For a given `maxPages`, greedily allocate books in their given order.

Keep adding books to the current student while their total pages do not
exceed `maxPages`. When adding the next book would exceed `maxPages`, start
allocating books to the next student.

`isFeasible()` checks whether all books can be allocated using at most
`students` students for the given `maxPages`.

The minimum possible value of `maxPages` is the maximum number of pages in
any single book, because every book must be assigned to one student.

The maximum possible value is the total number of pages, because one
student could receive all books.

Since a larger `maxPages` can never require more students, feasibility is
monotonic. Therefore, binary search is used to find the minimum feasible
maximum number of pages.

`long long` is used for page sums because the total can reach `10^10`.

---

## Time Complexity

O(n log S), where `S` is the total number of pages.

## Space Complexity

O(1)

---

## Key Learning

- This is another binary-search-on-answer problem with a monotonic
  feasibility condition.
- Books must be allocated in their original contiguous order.
- The lower bound is the largest individual book size.
- The upper bound is the total number of pages.
- The feasibility check greedily uses the current student until the page
  limit would be exceeded.
- `long long` is required for accumulated page counts because the total can
  exceed the range of a 32-bit `int`.

---

## Mistakes Made

- Initially used the minimum book size as the lower bound instead of the
  maximum book size.
- Initially used `int` for the page sums, which can overflow because the
  maximum total can reach `10^10`.

---

## Similar Problems

- 
