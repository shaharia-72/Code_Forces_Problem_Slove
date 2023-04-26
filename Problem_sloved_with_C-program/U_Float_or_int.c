/*Given a number N. Determine whether Nis float number or integer number.

Note:

If N is float number then print "float" followed by the integer part followed by decimal part separated by space. If N is integer number then print "int" followed by the integer part separated by space.For more clarification see the examples below.

Input
Only one line containing a number N (1≤N≤10^3)
Output
Print the answer required above.

Examples
inputCopy
234.000
outputCopy
int 234
inputCopy
534.958
outputCopy
float 534 0.958
*/

#include <stdio.h>
int main()
{
    double n;
    scanf("%lf", &n);

    // printf("%.3lf\n", n);

    double x = (int)n;
    // printf("%.3lf\n", x);

    if (n - x == 0)
    {
        printf("int %d\n", (int)x);
    }
    else
        printf("float %d %0.3lf", (int)x, n - x);

    return 0;
}