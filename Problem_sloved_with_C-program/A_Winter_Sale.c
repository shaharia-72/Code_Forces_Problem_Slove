/*The winter sale began, and Mrs. Sarah wants to buy a T-shirt for her son. The T-shirt has a ticket that indicates a discount of X% and its price P after the discount. She now wants to know the price before the discount to know if the discount was worthy. Help her!

Input
Only one line containing two numbers X and P (1≤X≤99,1≤P≤4×104) – the discount percentage, and the price of the T-shirt after the discount.

Output
Print the price of the T-shirt before the discount rounded up to two decimal places.

Examples
inputCopy
20 80
outputCopy
100.00
inputCopy
15 20
outputCopy
23.53*/

#include <stdio.h>
int main()
{
    float X, P;
    float Orig;
    scanf("%f %f", &X, &P);

    // we know that, original price * (100% - discount%) = sell price

    Orig = P / ((100.00 - X) / 100.00);

    printf("%.2lf", Orig);

    return 0;
}