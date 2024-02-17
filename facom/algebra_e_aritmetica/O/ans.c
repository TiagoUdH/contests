#include <stdio.h>

int mdc(int x, int y)
{
  int i, menor;

  if (x < y)
  {
    menor = x;
  }
  else
  {
    menor = y;
  }

  for (i = menor; i >= 1; i--)
  {
    if (!(x % i) && !(y % i))
    {
      return i;
    }
  }
}

int main()
{
  int N;

  scanf("%d", &N);

  while (N--)
  {
    int a, b;

    scanf("%d %d", &a, &b);

    printf("%d\n", mdc(a, b));
  }

  return 0;
}
