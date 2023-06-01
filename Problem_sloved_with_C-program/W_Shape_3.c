/*Given a number N. Print a diamond that has 2N rows.

For more clarification see the example below.

Input
Only one line containing number N (1 ≤ N ≤ 99).

Output
Print the answer according to the required above.

Example
inputCopy
4
outputCopy
   *
  ***
 *****
*******
*******
 *****
  ***
   *
Note
Don't print any extra spaces after symbol " * ".*/

#include <stdio.h>
int main()
{
    int n, rows, space, star;
    scanf("%d", &n);

    for (rows = 1; rows <= n; rows++)
    {

        for (space = 1; space <= n - rows; space++)
        {
            printf(" ");
        }

        for (star = 1; star <= rows * 2 - 1; star++)
        {
            printf("*");
        }

        printf("\n");
    }

    for (rows = n; rows >= 1; rows--)
    {
        for (space = 1; space <= n - rows; space++)
        {
            printf(" ");
        }
        for (star = 1; star <= rows * 2 - 1; star++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
