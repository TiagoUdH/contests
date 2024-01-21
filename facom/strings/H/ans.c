#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main()
{
  char iL[53] = "abcdefghijklmnopqrstuvwxyzabcdefghijklmnopqrstuvwxyz";
  char iU[53] = "ABCDEFGHIJKLMNOPQRSTUVWXYZABCDEFGHIJKLMNOPQRSTUVWXYZ";

  char s[10001];
  int N;

  char ans[10001];
  strcpy(ans, "");

  scanf(" %[^\n]", s);
  scanf("%d", &N);

  N %= 26;

  for (int i = 0; s[i] != '\0'; i++)
  {
    if (islower(s[i]))
    {
      for (int j = 0; iL[j] != '\0'; j++)
      {
        if (s[i] == iL[j])
        {
          strncat(ans, &iL[j + N], 1);
          break;
        }
      }
    }
    else if (isupper(s[i]))
    {
      for (int j = 0; iU[j] != '\0'; j++)
      {
        if (s[i] == iU[j])
        {
          strncat(ans, &iU[j + N], 1);
          break;
        }
      }
    }
    else
    {
      strncat(ans, &s[i], 1);
    }
  }

  printf("%s\n", ans);

  return 0;
}
