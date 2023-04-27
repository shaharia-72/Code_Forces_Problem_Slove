/*Given a comparison symbol S between two numbers A and B. Determine whether it is Right or Wrong.

The comparison is as follows: A < B, A > B, A = B.

Where A, B are two integer numbers and S refers to the sign between them.

Input
Only one line containing A, S and B respectively (-100  ≤  A, B  ≤  100), S can be ('<', '>','=') without the quotes.

Output
Print "Right" if the comparison is true, "Wrong" otherwise.

Examples
inputCopy
5 > 4
outputCopy
Right
inputCopy
9 < 1
outputCopy
Wrong
inputCopy
4 = 4
outputCopy
Right*/

#include <stdio.h>
#include <math.h>
int main()
{
    char operator;
    int a, b;
    scanf("%d ", &a);
    scanf("%c", &operator);
    scanf(" %d", &b);

    // printf("%d %c %d", a, operator, b);

    switch (operator)
    {
    case '>':
        if (a > b)
        {
            printf("Right");
        }
        else
            printf("Wrong");

        break;
    case '<':
        if (a < b)
        {
            printf("Right");
        }
        else
            printf("Wrong");

        break;
    case '=':
        if (a == b)
        {
            printf("Right");
        }
        else
            printf("Wrong");

        break;

    default:
        printf("Wrong");

        break;
    }
    return 0;
}