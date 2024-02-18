#include <stdio.h>

unsigned long long int fatorial(unsigned long long int N)
{
    if (N < 2)
    {
        return 1;
    }

    return N * fatorial(N - 1);
}

int main()
{
    unsigned long long int X;

    while (1)
    {
        scanf("%llu", &X);

        if (X == 0)
        {
            break;
        }

        printf("%llu\n", fatorial(X) / 6);
    }

    return 0;
}
