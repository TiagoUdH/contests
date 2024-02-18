#include <stdio.h>

int fatorial(int N)
{
    if (N < 2)
    {
        return 1;
    }

    return N * fatorial(N - 1);
}

int main()
{
    unsigned long long K, N;

    while (1)
    {
        unsigned long long ans = 1;

        scanf("%llu %llu", &K, &N);

        if (K == 0 && N == 0)
        {
            break;
        }

        if (K == 0)
        {
            printf("0\n");

            continue;
        }

        for (int i = K; i > K - N; i--)
        {
            ans *= i;
        }

        printf("%llu\n", ans / fatorial(N));
    }

    return 0;
}
