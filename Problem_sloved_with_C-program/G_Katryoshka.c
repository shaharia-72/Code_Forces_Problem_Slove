#include <stdio.h>
int main()
{
    long long e, m, k;
    scanf("%lld %lld %lld ", &e, &m, &k);

    // printf("%lld %lld %lld", e, m, k);

    long long count = 0;

    if (1 <= e && 1 <= m && 1 <= k)
    {
        if (2 <= e && 1 <= m && 1 <= k)
        {
            if (2 <= e && 1 <= k)
            {
                count++;
            }
        }
    }

    printf("%lld ", count);

    return 0;
}