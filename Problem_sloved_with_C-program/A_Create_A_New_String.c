/*Given two strings S and T. Print 2 lines that contain the following in the same order:

Print the length of S and T separated by space.
Print a new string that contains S and T separated by a space.
For more clarification see the example below.

Input
The first line contains a string S (1 ≤ |S| ≤ 10^3) where |S| is the length of S.

The second line contains a string T (1 ≤ |T| ≤ 10^3) where |T| is the length of T.

Output
Print the answer required above.

Examples
inputCopy
LEVEL
ONE
outputCopy
5 3
LEVEL ONE
inputCopy
Programming
contest
outputCopy
11 7
Programming contest*/

#include <stdio.h>
#include <string.h>

int main()
{
    char s[1001], T[1001];
    scanf("%s %s", s, T);

    int lens = strlen(s);
    int lent = strlen(T);

    printf("%d %d\n", lens, lent);

    strcat(s, " ");
    strcat(s, T);

    printf("%s", s);

    return 0;
}
