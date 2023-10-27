'''Given a number N. Print the digits of that number from right to left separated by space.

Input
First line contains a number T (1 ≤ T ≤ 10) number of test cases.

Next T lines will contain a number N (0 ≤ N ≤ 109)

Output
For each test case print a single line contains the digits of the number separated by space.

Example
inputCopy
4
121
39
123456
1200
outputCopy
1 2 1
9 3
6 5 4 3 2 1
0 0 2 1'''


def print_digits_from_right_to_left(number):
    digits = []
    while number > 0:
        digit = number % 10
        digits.append(str(digit))
        number //= 10
    return digits


T = int(input())

for _ in range(T):
    N = int(input())
    digits = print_digits_from_right_to_left(N)
    print(" ".join(digits))
