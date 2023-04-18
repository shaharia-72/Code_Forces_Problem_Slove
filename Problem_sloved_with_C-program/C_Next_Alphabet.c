/*Given a lowercase alphabet character. You have to print the next character in the alphabet.

Input
Only one line containing a lowercase English letter C.

Output
Print the next letter to C in the alphabet.

Example
inputCopy
a
outputCopy
b
Note
The next letter to z is a.*/

#include <stdio.h>
int main()
{
    char val;
    scanf("%c", &val);
    // printf("%c", val);

    int z = val;

    if (z == 122)
        printf("%c", 'a');
    else
        printf("%c", z + 1);

    return 0;
}
