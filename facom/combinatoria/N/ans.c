#include <stdio.h>

int main()
{
    unsigned long long int N, v[100];

    v[0] = 1;
    v[1] = 1;
    v[2] = 1;

    scanf("%llu", &N);

    for (int i = 3; i < N; i++)
    {
        v[i] = v[i - 1] + v[i - 2] + v[i - 3];
    }

    printf("%llu\n", v[N - 1]);

    return 0;
}
