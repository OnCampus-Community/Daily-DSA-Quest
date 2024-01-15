# PROBLEM OF THE DAY : Word Rectangle

## STATEMENT 

You are given an array 'ARR' of Integers. Your task is to replace each element of the array with the smallest element, which is strictly greater than that element and is present on the right side of that element in the array i.e. for each valid index ‘i’ replace ARR[i] with the smallest ARR[j] such that ARR[j]>ARR[i] and j>i.<br>

In case there exists no such element satisfying the above conditions for a particular array element, replace it with -1.<br>

For example :<br>

Consider the array ARR = [ 1, 4, 2, 6 ] having 4 elements.<br>
The array containing the Least Greater Elements for the above array will be [ 2, 6, 6, -1 ].

## Constraints

* 1 <= T <= 10
* 1 <= N <= 10^4
* 0 <= ARR[i]  <= 10^9

## REFERENCE

https://www.codingninjas.com/studio/problems/least-greater-element_1164266