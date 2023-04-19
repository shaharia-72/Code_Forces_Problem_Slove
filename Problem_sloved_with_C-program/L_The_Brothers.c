/*Given two person names.

Each person has {"the first name" + "the second name"}

Determine whether they are brothers or not.

Note: The two persons are brothers if they share the same second name.

Input
First line will contain two Strings F1, S1 which donates the first and second name of the 1st person.

Second line will contain two Strings F2, S2 which donates the first and second name of the 2nd person.

Output
Print "ARE Brothers" if they are brothers otherwise print "NOT".

Examples*/

#include <stdio.h>
#include <string.h>
int main()
{
    char f1[100], s1[100], f2[100], s2[100];

    scanf("%s %s", &f1, &s1);

    scanf("%s %s", &f2, &s2);

    if (strcmp(s1, s2) == 0)
    {
        printf("ARE Brothers");
    }
    else
    {
        printf("NOT");
    }

    return 0;
}