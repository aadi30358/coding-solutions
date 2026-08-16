# TONKSS08

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### Worked Example - Converting Age from Int to Double

In this example, we will store a person’s age as an integer and observe how Java automatically converts it to a double when assigned to a larger data type. This process is known as implicit type conversion.

 **When executed, the code will show** :

```
Integer Age: 25  
Converted Age (Double): 25.0  

```

## Solution

**Language:** Java  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-08-16T13:50:44.734Z  

```java
class Codechef {
    public static void main(String[] args) {
        int age = 25;
        double convertedAge = age;
        
        System.out.println("Integer Age: " + age);
        System.out.println("Converted Age (Double): " + convertedAge);
    }
}
```

---

[View on CodeChef](https://www.codechef.com/problems/TONKSS08)