# PROBLEM OF THE DAY : All Distinct

## STATEMENT 

Sho has an array a consisting of n integers. An operation consists of choosing two distinct indices i and j and removing ai and aj from the
array.<br>

For example, for the array [2, 3, 4, 2, 5], Sho can choose to remove indices 1 and 3. After this operation, the array becomes [3, 2, 5]. Note
that after any operation, the length of the array is reduced by two.<br>

After he made some operations, Sho has an array that has only distinct elements. In addition, he made operations such that the resulting
array is the longest possible.<br>

More formally, the array after Sho has made his operations respects these criteria:<br>

· No pairs such that (i < j) and ai = aj exist.<br>
. The length of a is maximized.<br>

Output the length of the final array.

## Constraints

* 1 ≤ t ≤ 10^3
* 1 ≤ n ≤ 50
* 1 ≤ ai ≤ 10^4

## REFERENCE

https://codeforces.com/contest/1692/problem/B