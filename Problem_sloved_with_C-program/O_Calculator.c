/*Given a mathematical expression. The expression will be one of the following expressions: A+B
, A−B
, A∗B
 and A/B
.

Print the result of the mathematical expression.

Input
Only one line contains A,S
 and B
 (1≤A,B≤10^4)
, S
 is either (+,−,∗,/)
.

Output
Print the result of the mathematical expression.

Examples
inputCopy
7+54
outputCopy
61
inputCopy
17*10
outputCopy
170
Note
For the dividing operation you should print the division without any fractions.*/

#include <stdio.h>
#include <math.h>
int main()
{
    char operator;
    int a, b;
    scanf("%d", &a);
    scanf("%c", &operator);
    scanf("%d", &b);

    switch (operator)
    {
    case '+':
        printf("%d", a + b);
        break;

    case '-':
        printf("%d", a - b);
        break;
    case '*':
        printf("%d", a * b);
        break;

    default:
        printf("%d", a / b);
        break;
    }
    return 0;
}