#include <stdio.h>
#include <string.h>

int main()
{
  char s[100001], ans[100001];
  int N;

  scanf("%d", &N);
  strcpy(ans, "");

  for (int i = 0; i < N; i++)
  {
    scanf("%s", s);

    if (i != 0)
    {
      strcat(ans, " ");
    }

    strcat(ans, s);
  }

  printf("%s\n", ans);

  return 0;
}