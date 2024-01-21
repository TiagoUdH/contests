#include <stdio.h>
#include <string.h>

int main()
{
  char s[1001], ans[1001], at, aux[5];
  int occ = 1;

  scanf(" %[^\n]", s);
  strncpy(ans, s, 1);
  at = s[0];

  for (int i = 1; i < strlen(s); i++)
  {
    if (s[i] == s[i - 1])
    {
      occ++;

      if (i == strlen(s) - 1)
      {
        sprintf(aux, "%d", occ);
        strcat(ans, aux);
      }
    }
    else
    {
      if (occ != 1)
      {
        sprintf(aux, "%d", occ);
        strcat(ans, aux);
        occ = 1;
      }

      strncat(ans, &s[i], 1);
    }
  }

  if (strlen(s) > strlen(ans))
  {
    printf("%s\n", ans);
  }
  else
  {
    printf("%s\n", s);
  }

  return 0;
}