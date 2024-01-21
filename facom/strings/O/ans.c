#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main()
{
  char s1[1001];
  int ans = 0;

  scanf(" %[^\n]", s1);

  for (int i = 0; i < strlen(s1); i++)
  {
    char c = tolower(s1[i]);

    if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
    {
      ans++;
    }
  }

  printf("%d\n", ans);

  return 0;
}