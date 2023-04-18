/*Given two numbers N and M. Print the summation of their last digits.

Input
Only one line containing two numbers N, M (0 ≤ N, M ≤ 10^18).

Output
Print the answer of the problem.

Example
inputCopy
13 12
outputCopy
5
Note
First Example :

last digit in the first number is 3 and last digit in the second number is 2.

So the answer is: (3 + 2 = 5)*/

#include <stdio.h>
int main()
{
    long long a, b, c;

    scanf("%lld %lld ", &a, &b);

    int last_digit_of_a = a % 10;
    int last_digit_of_b = b % 10;

    int sum = 0;
    sum = last_digit_of_a + last_digit_of_b;

    printf("%d", sum);
    return 0;
}