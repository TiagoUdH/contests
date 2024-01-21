#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
  char s[101];
  char *aux;
  int qtd = 0;

  scanf(" %[^\n]", s);

  aux = strtok(s, "@");

  while (aux != NULL)
  {
    if (qtd == 0)
    {
      for (int i = 0; aux[i] != '\0'; i++)
      {
        if (!(islower(aux[i]) || isdigit(aux[i]) || aux[i] == '_' || aux[i] == '.'))
        {
          printf("0\n");
          return 0;
        }
      }
    }
    else
    {
      for (int i = 0; aux[i] != '\0'; i++)
      {
        if (!(islower(aux[i]) || aux[i] == '.'))
        {
          printf("0\n");
          return 0;
        }

        if (aux[i + 1] == '\0' && aux[i] == '.')
        {
          printf("0\n");
          return 0;
        }
      }
    }

    aux = strtok(NULL, "@");
    qtd++;
  }

  if (qtd != 2)
  {
    printf("0\n");
  }
  else
  {
    printf("1\n");
  }

  return 0;
}
