#include <stdio.h>

int main()
{
    unsigned long long int n;

    scanf("%llu", &n);

    n = n * (1 + n) / 2;

    printf("%llu\n", n);

    return 0;
}
