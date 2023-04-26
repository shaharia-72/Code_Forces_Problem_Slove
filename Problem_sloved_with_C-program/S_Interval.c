/*Given a number X. Determine in which of the following intervals the number X belongs to:

[0,25], (25,50], (50,75], (75,100]

Note:

if X belongs to any of the above intervals print "Interval " followed by the interval.
if X does not belong to any of the above intervals print "Out of Intervals".
The symbol '(' represents greater than.
The symbol ')' represents smaller than.
The symbol '[' represents greater than or equal.
The symbol ']' represents smaller than or equal.
For example:

[0,25] indicates numbers between 0 and 25.0000, including both.

(25,50] indicates numbers greater than 25: (25.00001) up to 50.0000000.

Input
Only one line containing a number X ( - 1000 ≤ X ≤ 1000).

Output
Print the answer to the problem above.

Examples
inputCopy
25.1
outputCopy
Interval (25,50]
inputCopy
25.0
outputCopy
Interval [0,25]
inputCopy
100.0
outputCopy
Interval (75,100]
inputCopy
-25.2
outputCopy
Out of Intervals*/

#include <stdio.h>
int main()
{
    double a;
    scanf("%lf", &a);

    // printf("%lf\n", a);

    if (0 <= a && a <= 25)
    {
        printf("Interval [0,25]");
    }

    else if (25.1 <= a && a <= 50.0)
    {
        printf("Interval (25,50]");
    }

    else if (50 <= a && a <= 75)
    {
        printf("Interval (50,75]");
    }

    else if (75 <= a && a <= 100.0)
    {
        printf("Interval (75,100]");
    }

    else
    {
        printf("Out of Intervals");
    }
    return 0;
}