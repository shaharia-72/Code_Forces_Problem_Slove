/*Given 4 numbers A, B, C and D . Print the last 2 digits from their Multiplication.
Input
Only one line containing four numbers A, B, C and D (2≤A,B,C,D≤10^9).

Output
Print the last 2 digits from their Multiplication.

Examples
inputCopy
5 7 2 4
outputCopy
80
inputCopy
3 9 9 9
outputCopy
87

Note
First Example :

the Multiplication of 4 numbers is 5 * 7 * 2 * 4 = 280 so the answer will be the last 2 digits which are 80.

Second Example :

the Multiplication of 4 numbers is 3 * 9 * 9 * 9 = 2187 so the answer will be the last 2 digits which are 87.*/

#include <stdio.h>
int main()
{
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    a %= 100;
    b %= 100;
    c %= 100;
    d %= 100;

    int x = a * b * c * d;
    int y = x % 100;

    if (y <= 9)
    {
        printf("0%d", y);
    }

    else
    {
        printf("%d", y);
    }

    return 0;
}
