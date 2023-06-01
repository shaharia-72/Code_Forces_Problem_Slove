/*Given a number N. Print a face down right angled triangle that has N rows.

For more clarification see the example below.

Input
Only one line containing a number N (1 ≤ N ≤ 99).

Output
Print the answer according to the required above.

Example
inputCopy
4
outputCopy
****
***
**
*
Note
Don't print any extra spaces after symbol " * ".
*/
#include <stdio.h>

int main()
{
    int N, i, j;
    scanf("%d", &N);
    for (i = N; i >= 1; i--)
    {
        for (j = 1; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
