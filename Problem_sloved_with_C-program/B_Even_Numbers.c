/*Given a number N. Print all even numbers between 1 and N inclusive in separate lines.

Input
Only one line containing a number N (1 ≤ N ≤ 10^3).

Output
Print the answer according to the required above. If there are no even numbers print -1.

Examples
inputCopy
10
outputCopy
2
4
6
8
10
inputCopy
5
outputCopy
2
4*/

#include <stdio.h>
int main()
{
    int n, i;

    scanf("%d", &n);
    if (n < 2)
    {
        printf("-1");
    }

    else
        for (i = 1; i <= n; i++)
        {
            if (i % 2 == 0)
            {
                printf("%d\n", i);
            }
        }

    return 0;
}