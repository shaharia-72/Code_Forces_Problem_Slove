/*Given two strings X and Y . Print the smallest lexicographical one.

Note: Lexicographical is the way of ordering the words based on the alphabetical order of their component letters.

Input
Only one line contains two strings X, Y(1 ≤ |X|, |Y| ≤ 20) consists of lowercase English letters.

Output
Print the smallest lexicographical string.

Note: If both of X and Y are equal, print any of them.

Example
inputCopy
acm
acpc
outputCopy
acm*/

#include <stdio.h>
#include <string.h>
int main()
{
    char a[21], b[21];
    scanf("%s", a);
    scanf("%s", b);

    // printf("%s %s", a, b);

    if (strcmp(a, b) > 0)
    {
        printf("%s", b);
    }
    else
        printf("%s", a);

    return 0;
}