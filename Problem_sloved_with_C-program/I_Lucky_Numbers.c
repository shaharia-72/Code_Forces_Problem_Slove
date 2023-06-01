/*A number of two digits is lucky if one of its digits is divisible by the other.

For example, 39, 82, and 55 are lucky, while 79 and 43 are not.

Given a number between 10 and 99, determine whether it is lucky or not.

Input
Only one line containing a single number N (10≤N≤99).

Output
Print "YES" if the given number is lucky, otherwise print "NO".

Examples
inputCopy
39
outputCopy
YES
inputCopy
64
outputCopy
NO*/

#include <stdio.h>

int isLucky(int num)
{
    int tensDigit = num / 10;
    // printf("%d\n", tensDigit);
    int onesDigit = num % 10;
    // printf("%d\n", onesDigit);
    if (onesDigit == 0)
    {
        return 1;
    }

    if (tensDigit % onesDigit == 0 || onesDigit % tensDigit == 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    int N;
    scanf("%d", &N);

    if (isLucky(N))
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }

    return 0;
}
