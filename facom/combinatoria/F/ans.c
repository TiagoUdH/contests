#include <stdio.h>

int main()
{
    int N;
    long long int K, ans = 1;

    scanf("%d", &N);

    if (N == 0)
    {
        return 0;
    }

    while (N--)
    {
        scanf("%lld", &K);

        ans *= K;
    }

    printf("%llu\n", ans);

    return 0;
}
