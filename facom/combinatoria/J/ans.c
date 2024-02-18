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
    unsigned long long int p1, p2, p3 = 1, ap, X;

    scanf("%llu", &X);

    p1 = X * 0.63;
    p2 = p1 * 0.8;

    ap = p2 * 0.35;

    for (unsigned long long int i = ap; i > ap - 8; i--)
    {
        p3 *= i;
    }

    printf("[%llu, %llu, %llu]\n", p1, p2, p3);

    return 0;
}
