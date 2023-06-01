/*Given a number N, and N numbers, find maximum number in these N numbers.

Input
First line contains a number N (1 ≤ N ≤ 10^3).

Second line contains N numbers Xi (0 ≤ Xi ≤ 10^9).

Output
Print the maximum number.

Example
inputCopy
5
1 8 5 7 5
outputCopy
8*/

#include <stdio.h>
#include <math.h>
int main()
{
    int n, i, a[1005];

    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    int max = a[0];
    for (i = 0; i < n; i++)
    {
        if (a[i] > max)
        {
            max = a[i];
        }
    }

    printf("%d", max);

    return 0;
}