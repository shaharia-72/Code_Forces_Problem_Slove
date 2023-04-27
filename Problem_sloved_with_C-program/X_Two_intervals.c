/*Given the boundaries of 2 intervals. Print the boundaries of their intersection.

Note: Boundaries mean the two ends of an interval which are the starting number and the ending number.

Input
Only one line contains two intervals [l1,r1]
, [l2,r2]
 where (1≤l1,l2,r1,r2≤10^9)
, (l1≤r1,l2≤r2)
.

It's guaranteed that l1≤r1
 and l2≤r2
.

Output
If there is an intersection between these 2 intervals print its boundaries , otherwise print -1.

Examples
inputCopy
1 15 5 27
outputCopy
5 15
inputCopy
2 5 6 12
outputCopy
-1*/

#include <stdio.h>

int main()
{
    int l1, r1, l2, r2;
    scanf("%d %d %d %d", &l1, &r1, &l2, &r2);

    if (r1 < l2 || r2 < l1)
    {
        printf("-1\n");
    }
    else
    {
        int left = (l1 > l2) ? l1 : l2;
        int right = (r1 < r2) ? r1 : r2;
        printf("%d %d\n", left, right);
    }

    return 0;
}
