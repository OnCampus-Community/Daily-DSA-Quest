# PROBLEM OF THE DAY : Sequence Game

## STATEMENT 

Tema and Vika are playing the following game.

First, Vika comes up with a sequence of positive integers a of length m and writes it down on a piece of paper. Then she takes a new piece
of paper and writes down the sequence b according to the following rule:<br>

. First, she writes down a1.<br>
. Then, she writes down only those ai (2 ≤ i < m) such that di-1 ≤ ai. Let the length of this sequence be denoted as n.<br>

For example, from the sequence a = [4, 3, 2, 6, 3, 3], Vika will obtain the sequence b = [4, 6, 3].<br>
She then gives the piece of paper with the sequence b to Tema. He, in turn, tries to guess the sequence a.<br>

Tema considers winning in such a game highly unlikely, but still wants to find at least one sequence a that could have been originally
chosen by Vika. Help him and output any such sequence.<br>

Note that the length of the sequence you output should not exceed the input sequence length by more than two times.

## Constraints

* 1 <= t <= 10 ^ 4
* 1 ≤ n ≤ 2*10^5
* 1 ≤ bi ≤ 10^9

## REFERENCE

https://codeforces.com/problemset/problem/1862/B