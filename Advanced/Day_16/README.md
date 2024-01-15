# PROBLEM OF THE DAY : Find Players With Zero or One Losses

## STATEMENT 

You are given an integer array matches where matches[i] = [winneri, loseri] indicates that the player winneri defeated player loseri in a match.<br>

Return a list answer of size 2 where:<br>

answer[0] is a list of all players that have not lost any matches.<br>
answer[1] is a list of all players that have lost exactly one match.<br>
The values in the two lists should be returned in increasing order.<br>

Note:<br>

You should only consider the players that have played at least one match.<br>
The testcases will be generated such that no two matches will have the same outcome.

## Constraints

* 1 <= matches.length <= 105
* matches[i].length == 2
* 1 <= winneri, loseri <= 105
* winneri != loseri
* All matches[i] are unique.

## REFERENCE

https://leetcode.com/problems/find-players-with-zero-or-one-losses/description/?envType=daily-question&envId=2024-01-15