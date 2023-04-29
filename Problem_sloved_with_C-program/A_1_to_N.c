/*Given a number N. Print numbers from 1 to N in separate lines.

Input
Only one line containing a number N (1 ≤ N ≤ 10^3).

Output
Print N lines according to the required above.

Example*/

#include <stdio.h>

int main()
{
    int n, i;

    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        printf("%d\n", i);
    }

    return 0;
}