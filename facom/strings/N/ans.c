#include <stdio.h>
#include <string.h>

int main()
{
  char s[1001], ans[1001];

  scanf(" %[^\n]", s);
  strncpy(ans, s, 1);

  for (int i = 1; i < strlen(s); i++)
  {
    if (s[i] != s[i - 1])
    {
      strncat(ans, &s[i], 1);
    }
  }

  printf("%s\n", ans);

  return 0;
}