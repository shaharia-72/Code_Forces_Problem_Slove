#include <stdio.h>
int main()
{
    long long int n, sum;
    scanf("%lld", &n);

    printf("%lld", (n * (n + 1)) / 2);

    return 0;
}