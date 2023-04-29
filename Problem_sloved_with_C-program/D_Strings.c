/*Given two strings A and B. Print three lines contain the following:

The size of the string A and size of the string B separated by a space
The string produced by concatenating A and B (A + B).
The two strings separated by a single space respectively, after swapping their first character.
For more clarification see the example below.

Input
The first line contains a string A (1 ≤ |A| ≤ 10) where |A| is the length of A.

The second line contains a string B (1 ≤ |B| ≤ 10) where |B| is the length of B.

Output
Print the answer required above.

Example
inputCopy
abcd
ef
outputCopy
4 2
abcdef
ebcd af*/

#include <stdio.h>
#include <string.h>

void swap(char *c, char *b)
{
    char temp = *c;
    *c = *b;
    *b = temp;
}

int main()
{
    char a[100], b[100], c[100];

    scanf("%s %s", &a, &b);
    strcpy(c, a);

    printf("%d %d\n", strlen(a), strlen(b));
    strcat(a, b);
    printf("%s\n", a);

    swap(&c[0], &b[0]);
    printf("%s %s", c, b);

    return 0;
}