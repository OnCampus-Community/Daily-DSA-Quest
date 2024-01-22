# PROBLEM OF THE DAY : Minimize Maximum Pair Sum in Array

## STATEMENT 

The pair sum of a pair (a,b) is equal to a + b. The maximum pair sum is the largest pair sum in a list of pairs.<br>

For example, if we have pairs (1,5), (2,3), and (4,4), the maximum pair sum would be max(1+5, 2+3, 4+4) = max(6, 5, 8) = 8.<br>
Given an array nums of even length n, pair up the elements of nums into n / 2 pairs such that:<br>

* Each element of nums is in exactly one pair, and
* The maximum pair sum is minimized.

Return the minimized maximum pair sum after optimally pairing up the elements.

## Constraints

* n == nums.length
* 2 <= n <= 10^5
* n is even
* 1 <= nums[i] <= 10^5

## REFERENCE

https://leetcode.com/problems/minimize-maximum-pair-sum-in-array/description/