# TONKSS05

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### Team Performance Tracker

A sports analyst tracks player performance in a football match.
Use  **`int`**  for goals and assists (whole numbers) and  **`double`**  for player ratings (decimal values) while declaring multiple variables in a single statement for efficiency.

 **Expected Output:** 

```
Goals Scored: 3  
Assists Made: 2  
Shots on Target: 5  
Player 1 Rating: 8.5  
Player 2 Rating: 7.9  

```

Run the code, modify values, and analyze different match scenarios!

## Solution

**Language:** Java  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-08-16T13:46:51.924Z  

```java
class Codechef {
    public static void main(String[] args) {
        int goal = 3;
        int mode = 2;
        int shot =5;
        
        double player1 = 8.5;
        double player2 = 7.9;
        
        System.out.println("Goals Scored: " + goal);
        System.out.println("Assists Made: " + mode);
        
        System.out.println("Shots on Target: " + shot);
        System.out.println("Player 1 Rating: " + player1);
        System.out.println("Player 2 Rating: " + player2);
        
    }
}
```

---

[View on CodeChef](https://www.codechef.com/problems/TONKSS05)