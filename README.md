# PerfectNumberChecker

This small C++ program checks whether an integer entered by the user is a **perfect number** or not.

## 📌 What is a Perfect Number?

A number is called a **perfect number** if the **sum of its positive divisors excluding itself** equals the number itself.

**Example:**
- 6 → Divisors: 1, 2, 3 → 1 + 2 + 3 = 6 ✅  
- 28 → 1 + 2 + 4 + 7 + 14 = 28 ✅

## 🚀 How Does the Program Work?

1. It takes an integer input from the user.
2. It checks all divisors from 1 up to half of the number.
3. If the sum of these divisors equals the original number, it is a perfect number.

## 🧠 Method Used

- A `for` loop is used to find the divisors.
- The `%` operator checks for divisibility.
- An `if` block checks if the total is equal to the number.
