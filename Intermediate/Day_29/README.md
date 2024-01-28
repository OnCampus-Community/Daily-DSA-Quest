# PROBLEM OF THE DAY : Find pairs with given sum in doubly linked list

## STATEMENT 

You are provided with a string ‘S’ which indicates the nested list. For example: “[1, [2, 3], [4, [5, 6] ] ]”. Each number present in the list has some depth. The depth of a particular number is the number of nested lists in which it is present. Consider the previous example in which the number ‘1’ is at depth 1, numbers ‘2’, ‘3’, and ‘4’ are at depth 2, and numbers ‘5’ and ‘6’ are at depth 3.<br>

You have to find the goodness of the given string/nested list. The goodness of a string is the sum of the product of depths and elements present in the string.<br>

For Example:<br>

S = “[1, [2, 3], [4, [5, 6] ] ]”<br>
Total depth  = 1*1 + 2*2 + 3*2 + 4*2 + 5*3 + 6*3 = 52<br>
Note:<br>

1. The given string may be empty. 
2. The string will not contain any white spaces. 
3. You have to take the modulo with 10 ^ 9 + 7 as the answer may be very large.

## Constraints

* 1 <= T <= 100
* 1 <= |S| <= 100000
* 1 <= ES[ i ] <= 10^5

## REFERENCE

https://www.codingninjas.com/studio/problems/goodness-of-a-string_1266049