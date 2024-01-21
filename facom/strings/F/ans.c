#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>

int main()
{
  char s1[101];
  bool qtd = false, mai = false, min = false, num = false;

  scanf("%s", s1);

  if (strlen(s1) < 8)
  {
    printf("minimo de 8 caracteres\n");
  }
  else
  {
    qtd = true;
  }

  for (int i = 0; s1[i] != '\0'; i++)
  {
    if (isupper(s1[i]))
    {
      mai = true;
    }
    else if (islower(s1[i]))
    {
      min = true;
    }
    else if (isdigit(s1[i]))
    {
      num = true;
    }
  }

  if (!mai)
  {
    printf("letra maiuscula\n");
  }

  if (!min)
  {
    printf("letra minuscula\n");
  }

  if (!num)
  {
    printf("numero\n");
  }

  if (qtd && mai && min && num)
  {
    printf("senha valida\n");
  }

  return 0;
}