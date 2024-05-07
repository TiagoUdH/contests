#include <stdio.h>

long long mdc(long long a, long long b)
{
  if (b == 0)
  {
    return a;
  }

  return mdc(b, a % b);
}

long long mmc(long long a, long long b)
{
  return a * b / mdc(a, b);
}

int main()
{
  long long c[3], total = 0, mmcc = 1;
  long double ans;

  for (int i = 0; i < 3; i++)
  {
    scanf("%lli", &c[i]);
    mmcc = mmc(mmcc, c[i]);
  }

  for (int i = 0; i < 3; i++)
  {
    total += mmcc / c[i];
  }

  ans = (long double)mmcc / total;

  printf("%.3Lf\n", ans);

  return 0;
}