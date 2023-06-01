/*Given N numbers. Count how many of these values are even, odd, positive and negative.

Input
First line contains one number N (1 ≤ N ≤ 10^3) number of values.

Second line contains N numbers (-10^5 ≤ Xi ≤ 10^5).

Output
Print four lines with the following format:

First Line: "Even: X", where X is the number of even numbers in the given input.

Second Line: "Odd: X", where X is the number of odd numbers in the given input.

Third Line: "Positive: X", where X is the number of positive numbers in the given input.

Fourth Line: "Negative: X", where X is the number of negative numbers in the given input.

Example
inputCopy
5
-5 0 -3 -4 12
outputCopy
Even: 3
Odd: 2
Positive: 1
Negative: 3
Note
First Example :

Even Numbers are : 0, -4 , 12

Odd Numbers are : -5 , -3

Positive Numbers are : 12

Negative Numbers are : -5 , -3 , -4*/

#include <stdio.h>
int main()
{
    int n, a[100009];
    scanf("%d", &n);
    int even = 0, odd = 0, pos = 0, neg = 0;

    for (int i = 1; i <= n; i++)
    {
        scanf("%d", &a[i]);
    }

    for (int i = 1; i <= n; i++)
    {
        // printf("%d ", a[i]);

        (a[i] % 2 == 0) ? even++ : odd++;

        if (a[i] != 0)
        {
            (a[i] < 0) ? neg++ : pos++;
        }

        // printf("%d ", i);
    }

    printf("Even: %d\n", even);
    printf("Odd: %d\n", odd);
    printf("Positive: %d\n", pos);
    printf("Negative: %d\n", neg);

    return 0;
}