/*Given a string S. Print the summation of its digits.

Input
Only one line contains a string S (1 ≤ |S| ≤ 10^6) where |S| is the length of the string.

It's guaranteed that S contains only digits from 0 to 9.

Output
Print the answer required above.

Example
inputCopy
351
outputCopy
9
Note
First Test :

3 + 5 + 1 = 9 .*/

#include <stdio.h>
int main()
{
    char s[1000005];
    scanf("%s", s);

    int sum = 0;
    for (int i = 0; s[i] != '\0'; i++)
    {
        if (s[i] >= '0' && s[i] <= '9')
        {
            sum += s[i] - '0';
        }
    }

    printf("%d\n", sum);
    return 0;
}
