# PROBLEM OF THE DAY : A-B Palindrome

## STATEMENT 

You are given a string s consisting of the characters '0', '1', and '?'. You need to replace all the characters with '?' in the string s by '0' or '1' so that the string becomes a palindrome and has exactly a characters '0' and exactly b characters '1'. Note that each of the characters '?'is replaced independently from the others.<br>

A string t of length n is called a palindrome if the equality t[i] = t[n - i +1] is true for all i (1 ≤ i ≤ n).<br>
For example, if s ="01 ????? 0", a = 4 and b = 4, then you can replace the characters '?' in the following ways:<br>

· "01011010";<br>
· "01100110".<br>

For the given string s and the numbers a and b, replace all the characters with '?' in the string s by '0' or '1' so that the string becomes a
palindrome and has exactly a characters '0' and exactly b characters '1'.<br>

## Constraints

* 1 ≤ t ≤ 10^4
* 0 ≤ a, b ≤ 2⋅10^5
*  a + b ≥ 1

## REFERENCE

https://codeforces.com/contest/1512/problem/C