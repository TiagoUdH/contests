#include <stdio.h>
#include <string.h>

int main()
{
  char s[1001], *aux, aux2[1001], ans[1001];
  int qtd = 0, i = 0;

  scanf(" %[^\n]", s);

  strcpy(aux2, s);
  strcpy(ans, "");

  aux = strtok(s, " ");

  while (aux != NULL)
  {
    qtd++;
    aux = strtok(NULL, " ");
  }

  if (qtd <= 2)
  {
    printf("%s\n", aux2);
  }
  else
  {
    aux = strtok(aux2, " ");

    while (aux != NULL)
    {
      if (i == 0)
      {
        strcat(ans, aux);
      }
      else if (i == qtd - 1)
      {
        strcat(ans, " ");
        strcat(ans, aux);
      }
      else
      {
        if (strcmp(aux, "da") && strcmp(aux, "de") && strcmp(aux, "do") && strcmp(aux, "dos") && strcmp(aux, "e"))
        {
          strcat(ans, " ");
          strncat(ans, aux, 1);
          strcat(ans, ".");
        }
      }

      aux = strtok(NULL, " ");
      i++;
    }

    printf("%s\n", ans);
  }

  return 0;
}