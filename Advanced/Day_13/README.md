# PROBLEM OF THE DAY : Clumsy Factorial

## STATEMENT 

The factorial of a positive integer n is the product of all positive integers less than or equal to n.<br>

For example, factorial(10) = 10 * 9 * 8 * 7 * 6 * 5 * 4 * 3 * 2 * 1.<br>
We make a clumsy factorial using the integers in decreasing order by swapping out the multiply operations for a fixed rotation of operations with multiply '*', divide '/', add '+', and subtract '-' in this order.<br>

For example, clumsy(10) = 10 * 9 / 8 + 7 - 6 * 5 / 4 + 3 - 2 * 1.<br>
However, these operations are still applied using the usual order of operations of arithmetic. We do all multiplication and division steps before any addition or subtraction steps, and multiplication and division steps are processed left to right.<br>

Additionally, the division that we use is floor division such that 10 * 9 / 8 = 90 / 8 = 11.<br>

Given an integer n, return the clumsy factorial of n.

## Constraints

1 <= n <= 10^4

## REFERENCE 
https://leetcode.com/problems/clumsy-factorial/description/