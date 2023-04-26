#include <stdio.h>

int main()
{
    int a, b, c;
    scanf("%d%d%d", &a, &b, &c);

    int d = a;
    int e = b;
    int f = c;

    int temp;
    if (a > b)
    {
        temp = a;
        a = b;
        b = temp;
    }

    if (b > c)
    {
        temp = c;
        c = b;
        b = temp;
    }

    if (a > b)
    {
        temp = a;
        a = b;
        b = temp;
    }

    printf("%d\n%d\n%d\n", a, b, c);
    printf("\n");
    printf("%d\n%d\n%d\n", d, e, f);

    return 0;
}
