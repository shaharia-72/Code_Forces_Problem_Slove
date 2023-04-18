/*Given two numbers X and Y. Print the summation and multiplication and subtraction of these
2 numbers.

Input
Only one line containing two separated numbers X, Y (1  ≤  X, Y  ≤  105).

Output
Print 3 lines that contain the following in the same order:

"X + Y = summation result" without quotes.
"X * Y = multiplication result" without quotes.
"X - Y = subtraction result" without quotes.*/

#include <stdio.h>
int main()
{
    long long a, b;
    scanf("%lld %lld", &a, &b);

    printf("%lld + %lld = %lld\n", a, b, a + b);
    printf("%lld * %lld = %lld\n", a, b, a * b);
    printf("%lld - %lld = %lld\n", a, b, a - b);
    // printf("a + b = %d\n", a + b);
    return 0;
}