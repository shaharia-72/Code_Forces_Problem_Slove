/*Given a Number N corresponding to a person's age (in days). Print his age in years, months and days, followed by its respective message "years", "months", "days".

Note: consider the whole year has 365 days and 30 days per month.

Input
Only one line containing a number N (0 ≤ N ≤ 10^6).

Output
Print the output, like the following examples.

Examples
inputCopy
400
outputCopy
1 years
1 months
5 days
inputCopy
800
outputCopy
2 years
2 months
10 days
inputCopy
30
outputCopy
0 years
1 months
0 days*/

#include <stdio.h>
int main()
{
    int N;
    scanf("%d", &N);

    int y = N / 365;
    int m = (N % 365) / 30;
    int d = ((N % 365) % 30);

    printf("%d years\n", y);
    printf("%d months\n", m);
    printf("%d days\n", d);
    return 0;
}