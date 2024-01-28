#include <stdio.h>
#include <string.h>

int ordInsercao(char *v, int n)
{
  int i = 0, j = 0, ans = 0;

  char aux;

  for (i = 1; i < n; i++)
  {

    aux = v[i];

    j = i - 1;

    ans += 1;

    while ((j >= 0) && (aux < v[j]))
    {
      v[j + 1] = v[j];
      j--;

      ans += 1;
    }

    v[j + 1] = aux;
  }

  return ans;
}

int main()
{
  char c[1001];
  int n, siz;

  scanf("%d", &n);

  while (n--)
  {
    scanf("%s", c);

    siz = strlen(c);

    printf("%d\n", ordInsercao(c, siz));
  }

  return 0;
}
