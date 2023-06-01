/*Given three numbers n, k and a. Identify whether the data type of n×ka is int, long long or double.

Input
Only one line containing three numbers n, k and a (1≤a,k,n≤2147483647).

Output
Print "int", "long long" or "double" (without quotes) as described in the statement.

Examples
inputCopy
3 6 9
outputCopy
int
inputCopy
100000 200000 4
outputCopy
long long
Note
double is when a number has a floating-point.

int Range: [−2147483648,2147483647].

long long can hold values of a bigger range than that of int.*/

#include <stdio.h>

void DataType(double x, double y, double z)
{
    double result = (x * y) / z;
    long long intPart = (long long)result;

    if (result == intPart)
    {
        if (result >= -2147483648 && result <= 2147483647)
        {
            printf("int\n");
        }
        else
        {
            printf("long long\n");
        }
    }
    else
    {
        printf("double\n");
    }
}

int main()
{
    double a, b, c;
    scanf("%lf %lf %lf", &a, &b, &c);

    DataType(a, b, c);

    return 0;
}
