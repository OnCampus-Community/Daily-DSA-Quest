# PROBLEM OF THE DAY : Three Strings

## STATEMENT 

You are given three strings a, b and c of the same length n. The strings consist of lowercase English letters only. The i-th letter of a is ai,
the i-th letter of b is bi, the i-th letter of c is ci.<br>

For every i (1 < i < n) you must swap (i.e. exchange) c with either ai or bi. So in total you'll perform exactly n swap operations, each
of them either ci <> ai or ci <> bi (i iterates over all integers between 1 and n, inclusive).<br>

For example, if a is "code", b is "true", and cis "help", you can make c equal to "crue" taking the 1-st and the 4-th letters from a and
the others from b. In this way a becomes "hodp" and b becomes "tele".<br>

Is it possible that after these swaps the string a becomes exactly the same as the string b?

## Constraints

1 ≤ t ≤ 100

## REFERENCE 

https://codeforces.com/contest/1301/problem/A