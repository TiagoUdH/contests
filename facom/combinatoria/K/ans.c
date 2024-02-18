#include <stdio.h>

int main(int argc, char const *argv[])
{
    int T;

    scanf("%d", &T);

    printf("%d\n", T * (T - 1) * (T - 2));

    return 0;
}
