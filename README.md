# CP-Remainder
Codeforces Round #560 (Div. 3) Problem A

A. Remainder
time limit per test
1 second
memory limit per test
256 megabytes
input
standard input
output
standard output

You are given a huge decimal number consisting of n

digits. It is guaranteed that this number has no leading zeros. Each digit of this number is either 0 or 1.

You may perform several (possibly zero) operations with this number. During each operation you are allowed to change any digit of your number; you may change 0 to 1 or 1 to 0. It is possible that after some operation you can obtain a number with leading zeroes, but it does not matter for this problem.

You are also given two integers 0≤y<x<n
. Your task is to calculate the minimum number of operations you should perform to obtain the number that has remainder 10y modulo 10x. In other words, the obtained number should have remainder 10y when divided by 10x

.
Input

The first line of the input contains three integers n,x,y
(0≤y<x<n≤2⋅105) — the length of the number and the integers x and y

, respectively.

The second line of the input contains one decimal number consisting of n

digits, each digit of this number is either 0 or 1. It is guaranteed that the first digit of the number is 1.
Output

Print one integer — the minimum number of operations you should perform to obtain the number having remainder 10y
modulo 10x. In other words, the obtained number should have remainder 10y when divided by 10x

.
Examples
Input
Copy

11 5 2
11010100101

Output
Copy

1

Input
Copy

11 5 1
11010100101

Output
Copy

3

Note

In the first example the number will be 11010100100
after performing one operation. It has remainder 100 modulo 100000

.

In the second example the number will be 11010100010
after performing three operations. It has remainder 10 modulo 100000.
