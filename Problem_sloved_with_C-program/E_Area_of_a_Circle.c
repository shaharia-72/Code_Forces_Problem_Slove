/*Given a number R calculate the area of a circle using the following formula:

Area = π * R2.

Note: consider π = 3.141592653.

Input
Only one line containing the number R (1  ≤  R  ≤  100).

Output
Print the calculated area, with 9 digits after the decimal point.

Example
inputCopy
2.00
outputCopy
12.566370612*/

#include <stdio.h>
#include <math.h>

int main()
{
    double R, area;

    scanf("%lf", &R);

    area = 3.141592653 * R * R;

    printf("%.9lf", area);

    return 0;
}
