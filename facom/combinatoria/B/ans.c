#include <stdio.h>

int main()
{
    int n;
    long long int ans = 10;

    scanf("%d", &n);
    n--;

    while (n--)
    {
        ans *= 9;
    }

    printf("%lld\n", ans);

    return 0;
}