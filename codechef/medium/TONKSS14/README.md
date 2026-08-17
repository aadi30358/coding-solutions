# TONKSS14

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### Explicit Type Casting in Java

A shipping company tracks the weight of packages in kilograms using a double data type. However, for billing purposes, the weight must be converted to a whole number (`int`).

```
class Codechef {
    public static void main(String[] args) {
        double packageWeight = 12.75;
        int roundedWeight = __ packageWeight; // Perform explicit conversion

        System.out.println("Package Weight: " + roundedWeight + " kg");
    }
}

```

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-08-17T04:31:34.026Z  

```cpp
class Codechef {
    public static void main(String[] args) {
        long employeeId = 1234567890L;
        
        int convertedId = (int) employeeId;
        
        System.out.println("Employee ID (Long): " + employeeId);
        System.out.println("Converted Employee ID (Int): " + convertedId);
        
    }
}
```

---

[View on CodeChef](https://www.codechef.com/problems/TONKSS14)