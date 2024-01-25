# PROBLEM OF THE DAY : Cover in Water

## STATEMENT 

Filip has a row of cells, some of which are blocked, and some are empty. He wants all empty cells to have water in them. He has two
actions at his disposal:<br>

. 1 - place water in an empty cell.<br>
. 2- remove water from a cell and place it in any other empty cell.<br>

If at some moment cell i (2 < i < n - 1) is empty and both cells i - 1 and i + 1 contains water, then it becomes filled with water.<br>

Find the minimum number of times he needs to perform action 1 in order to fill all empty cells with water.<br>

Note that you don't need to minimize the use of action 2. Note that blocked cells neither contain water nor can Filip place water in them.

## Constraints

* 1 ≤ T ≤ 100
* 1 ≤ n ≤ 100

## REFERENCE

https://codeforces.com/problemset/problem/1900/A