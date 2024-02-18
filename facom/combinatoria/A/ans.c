#include <stdio.h>

int main()
{
    long long int n, ans = 1;

    for (int i = 0; i < 3; i++)
    {
        scanf("%lld", &n);

        ans *= n;
    }

    printf("%lld\n", ans);

    return 0;
}