/*Given four numbers A, B, C and D. Print the result of the following equation :X = (A * B) - (C * D).

Input
Only one line containing 4 separated numbers A, B, C and D ( - 105  ≤  A, B, C, D  ≤  105).

Output
Print "Difference  =  " without quotes followed by the equation result.

Examples
inputCopy
1 2 3 4
outputCopy
Difference = -10
inputCopy
2 3 4 5
outputCopy
Difference = -14
inputCopy
4 5 2 3
outputCopy
Difference = 14*/

#include <stdio.h>
int main()
{
    long long a, b, c, d, x;
    scanf("%lld %lld %lld %lld", &a, &b, &c, &d);

    x = (a * b) - (c * d);

    printf("Difference = %lld", x);

    return 0;
}