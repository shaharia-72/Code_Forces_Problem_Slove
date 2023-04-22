/*Given a letter X. If the letter is lowercase print the letter after converting it from lowercase letter to uppercase letter. Otherwise print the letter after converting it from uppercase letter to lowercase letter

Note : difference between 'a' and 'A' in ASCII is 32 .

Input
Only one line containing a character X which will be a capital or small letter.

Output
Print the answer to this problem.

Examples
inputCopy
a
outputCopy
A
inputCopy
A
outputCopy
a*/

#include <stdio.h>
int main()
{
    char val;
    scanf("%c", &val);

    // printf("%d", (int)'a');

    if ((int)'a' <= val && val <= (int)'z')
    {
        printf("%c", (int)val - 32);
    }

    else
    {
        printf("%c", (int)val + 32);
    }

    return 0;
}