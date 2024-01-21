#include <stdio.h>
#include <string.h>

void strrev(char *str)
{
  if (!str)
  {
    return;
  }
  int i = 0;
  int j = strlen(str) - 1;

  while (i < j)
  {
    char c = str[i];
    str[i] = str[j];
    str[j] = c;
    i++;
    j--;
  }
}

int main()
{
  char s[1001], aux[1001];

  scanf("%s", s);

  strcpy(aux, s);
  strrev(aux);

  if (!strcmp(s, aux))
  {
    printf("sim\n");
  }
  else
  {
    printf("não\n");
  }

  return 0;
}