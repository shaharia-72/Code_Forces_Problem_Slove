/*Given a mathematical expression. The expression will be one of the following expressions:

A + B = C, A - B = C and A * B = C

where A, B, C are three numbers, S is the sign between A and B, and Q the '=' sign

Print "Yes" If the expression is Right , Otherwise print the right answer of the expression.

Input
Only one line containing the expression: A, S, B, Q, C respectively (0 ≤ A, B ≤ 100,  - 10^5 ≤ C ≤ 10^5) and S can be ('+', '-', '*') without the quotation.

Output
Output either "Yes" (without the quotation) or the right answer depending on the statement.

Examples
inputCopy
5 + 10 = 15
outputCopy
Yes
inputCopy
3 - 1 = 2
outputCopy
Yes
inputCopy
2 * 10 = 19
outputCopy
20*/

#include <stdio.h>
int main()
{
    char operator, equal;
    int a, b, x;
    scanf("%d ", &a);
    scanf("%c ", &operator);
    scanf("%d ", &b);
    scanf("%c ", &equal);
    scanf("%d", &x);

    // printf("%d\n", x);

    // printf("%d%c%d=%d", a, operator, b, x);
    // printf("\n");

    switch (operator)
    {
    case '+':
        // printf("%d\n", x);

        if (a + b == x)
        {
            printf("Yes");
        }
        else
            printf("%d", a + b);

        break;

    case '-':

        if (a - b == x)
        {
            printf("Yes");
        }
        else
            printf("%d", a - b);

        break;

    case '*':
        // printf("%d\n", x);

        if (a * b == x)
        {
            printf("Yes");
        }
        else
            printf("%d", a * b);

        break;

    default:
        break;
    }

    return 0;
}