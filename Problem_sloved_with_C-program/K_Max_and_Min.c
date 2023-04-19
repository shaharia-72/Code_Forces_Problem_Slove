/*Given 3 numbers A, B and C, Print the minimum and the maximum numbers.

Input
Only one line containing 3 numbers A, B and C ( - 10^5 ≤ A, B, C ≤ 10^5)

Output
Print the minimum number followed by a single space then print the maximum number.

Examples
inputCopy
1 2 3
outputCopy
1 3
inputCopy
-1 -2 -3
outputCopy
-3 -1
inputCopy
10 20 -5
outputCopy
-5 20*/

#include <stdio.h>

int main()
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    int min = a, max = a;
    if (b < min)
    {
        min = b;
    }
    else if (b > max)
    {
        max = b;
    }
    if (c < min)
    {
        min = c;
    }
    else if (c > max)
    {
        max = c;
    }

    printf("%d %d", min, max);

    return 0;
}
