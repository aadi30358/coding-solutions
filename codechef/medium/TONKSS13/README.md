# TONKSS13

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### Converting Employee ID

In this example, we will store an employee ID using the `long` data type and observe how Java requires explicit type casting when converting it to an `int`.
Since `long` has a larger range than `int`.

 **When executed, the code will show** :

```
Employee ID (Long): 1234567890  
Converted Employee ID (Int): 1234567890  

```

## Solution

**Language:** Java  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-08-17T04:30:49.180Z  

```java
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

[View on CodeChef](https://www.codechef.com/problems/TONKSS13)