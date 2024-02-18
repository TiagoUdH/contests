#include <stdio.h>

unsigned long long int power(unsigned long long int base, unsigned long long int exponent)
{
    unsigned long long int result = 1;

    while (exponent > 0)
    {
        if (exponent % 2 == 1)
        {
            result *= base;
        }

        base *= base;
        exponent /= 2;
    }

    return result;
}

int main()
{
    unsigned long long int N, V;

    scanf("%llu %llu", &N, &V);

    printf("%llu\n", power(V, N));

    return 0;
}
