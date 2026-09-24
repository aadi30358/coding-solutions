# Pow(x, n)

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

Implement pow(x, n), which calculates `x` raised to the power `n` (i.e., `xn`).

 

 **Example 1:** 

```
Input: x = 2.00000, n = 10
Output: 1024.00000

```

 **Example 2:** 

```
Input: x = 2.10000, n = 3
Output: 9.26100

```

 **Example 3:** 

```
Input: x = 2.00000, n = -2
Output: 0.25000
Explanation: 2-2 = 1/22 = 1/4 = 0.25

```

 

 **Constraints:** 

- -100.0 < x < 100.0
- -231 <= n <= 231-1
- n is an integer.
- Either x is not zero or n > 0.
- -104 <= xn <= 104

## Solution

**Language:** C  
**Runtime:** 0 ms (beats 100.00%)  
**Memory:** 8.7 MB (beats 81.52%)  
**Submitted:** 2026-09-24T04:58:47.810Z  

```c
double myPow(double x, int n) {
    if(n==0) return (float)1;
    long N=n;
    if(N<0){
        N=-N;
        x=1/x;
    }
    double base=myPow(x,N/2);
    if(n%2==0)
    {
        return base*base;
    }
    else
    {
        return base*base*x;
    }
}
```

---

[View on LeetCode](https://leetcode.com/problems/powx-n/)