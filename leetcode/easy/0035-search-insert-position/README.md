# Search Insert Position

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

Given a sorted array of distinct integers and a target value, return the index if the target is found. If not, return the index where it would be if it were inserted in order.

You must write an algorithm with `O(log n)` runtime complexity.

 

 **Example 1:** 

```
Input: nums = [1,3,5,6], target = 5
Output: 2

```

 **Example 2:** 

```
Input: nums = [1,3,5,6], target = 2
Output: 1

```

 **Example 3:** 

```
Input: nums = [1,3,5,6], target = 7
Output: 4

```

 

 **Constraints:** 

- 1 <= nums.length <= 104
- -104 <= nums[i] <= 104
- nums contains distinct values sorted in ascending order.
- -104 <= target <= 104

## Solution

**Language:** C  
**Runtime:** 0 ms (beats 100.00%)  
**Memory:** 9.2 MB (beats 2.34%)  
**Submitted:** 2026-09-17T05:25:39.837Z  

```c
int searchInsert(int* arr, int n, int target) {
    for(int i=0;i<n;i++) {
        if(arr[i]==target) {
            return i;
        }
        if(arr[i]>target) {
            return i;
        }
    }
    return n;
}
```

---

[View on LeetCode](https://leetcode.com/problems/search-insert-position/)