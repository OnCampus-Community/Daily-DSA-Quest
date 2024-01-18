# PROBLEM OF THE DAY : Sort the Students by Their Kth Score

## STATEMENT 

There is a class with m students and n exams. You are given a 0-indexed m x n integer matrix score, where each row represents one student and score[i][j] denotes the score the ith student got in the jth exam. The matrix score contains distinct integers only.<br>

You are also given an integer k. Sort the students (i.e., the rows of the matrix) by their scores in the kth (0-indexed) exam from the highest to the lowest.<br>

Return the matrix after sorting it.

## Constraints

* m == score.length
* n == score[i].length
* 1 <= m, n <= 250
* 1 <= score[i][j] <= 10^5
* score consists of distinct integers.
* 0 <= k < n

## REFERENCE

https://leetcode.com/problems/sort-the-students-by-their-kth-score/