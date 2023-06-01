/*Given a number N. Print a pyramid that has N rows.

For more clarification see the example below.

Input
Only one line containing a number N (1 ≤ N ≤ 99).

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
Note
Don't print any extra spaces after symbol " * ".*/
#include <stdio.h>
int main()
{
    int n, row, space, star;
    scanf("%d", &n);

    for (row = 1; row <= n; row++)
    {
        for (space = 1; space <= n - row; space++)
        {
            printf(" ");
        }

        for (star = 1; star <= 2 * row - 1; star++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
