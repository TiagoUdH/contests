#include <stdio.h>
#include <math.h>

int main()
{
  long double a, b, c, s, ans;

  scanf("%Lf %Lf %Lf", &a, &b, &c);

  s = (a + b + c) / 2;
  ans = sqrt(s * (s - a) * (s - b) * (s - c));

  printf("%.3Lf m2\n", ans);

  return 0;
}