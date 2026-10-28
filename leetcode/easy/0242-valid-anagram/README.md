# Valid Anagram

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

Given two strings `s` and `t`, return `true` if `t` is an anagram of `s`, and `false` otherwise.

 

 **Example 1:** 

 **Input:**  s = "anagram", t = "nagaram"

 **Output:**  true

 **Example 2:** 

 **Input:**  s = "rat", t = "car"

 **Output:**  false

 

 **Constraints:** 

- 1 <= s.length, t.length <= 5 * 104
- s and t consist of lowercase English letters.

 

 **Follow up:**  What if the inputs contain Unicode characters? How would you adapt your solution to such a case?

## Solution

**Language:** C  
**Runtime:** 25 ms (beats 10.91%)  
**Memory:** 8.9 MB (beats 79.91%)  
**Submitted:** 2026-10-28T05:30:09.809Z  

```c
int compare(const void *a, const void *b) {
    return (*(char *)a - *(char *)b);
}

bool isAnagram(char* s, char* t) {
    int l1 = strlen(s);
    int l2 = strlen(t);

    if (l1 != l2) {
        return false;
    }

    qsort(s, strlen(s), sizeof(char), compare);
    qsort(t, strlen(t), sizeof(char), compare);

    for (int i = 0; i < l1; i++) {
        if (s[i] != t[i]) {
            return false;
        }
    }

    return true;
}
```

---

[View on LeetCode](https://leetcode.com/problems/valid-anagram/)