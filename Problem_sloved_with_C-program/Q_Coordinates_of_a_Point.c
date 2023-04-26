/*Given two numbers X, Y which donate coordinates of a point in 2D plan. Determine in which quarter does it belong.

Note:

Print Q1, Q2, Q3, Q4 according to the quarter in which the point belongs to.
Print "Origem" If the point is at the origin.
Print "Eixo X" If the point is over X axis.
Print "Eixo Y" if the point is over Y axis.

Input
Only one line containing two numbers X, Y ( - 1000 ≤ X, Y ≤ 1000).

Output
Print the answer to problem above.

Examples
inputCopy
4.5 -2.2
outputCopy
Q4
inputCopy
0.1 0.1
outputCopy
Q1*/

#include <stdio.h>

int main()
{
    double x, y;
    scanf("%lf %lf", &x, &y);

    if (x == 0 && y == 0)
    {
        printf("Origem\n");
    }
    else if (x == 0)
    {
        printf("Eixo Y\n");
    }
    else if (y == 0)
    {
        printf("Eixo X\n");
    }
    else if (x > 0 && y > 0)
    {
        printf("Q1\n");
    }
    else if (x < 0 && y > 0)
    {
        printf("Q2\n");
    }
    else if (x < 0 && y < 0)
    {
        printf("Q3\n");
    }
    else
    {
        printf("Q4\n");
    }

    return 0;
}
