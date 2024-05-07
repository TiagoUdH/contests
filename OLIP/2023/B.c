#include <stdio.h>

int main()
{
  int X, Y, Z;

  scanf("%d %d %d", &X, &Y, &Z);

  if (X * X != Y * Y + Z * Z)
  {
    printf("Nao eh retangulo!\n");
  }
  else
  {
    int c, t, ans;

    t = Y * Z / 2;
    c = 3 * Z * Z / 8;
    ans = c + t;

    printf("AREA = %d\n", ans);
  }

  return 0;
}