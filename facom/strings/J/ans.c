#include <stdio.h>
#include <string.h>

int main()
{
  char s1[3001], s2[3001];

  scanf(" %[^\n]", s1);
  scanf(" %[^\n]", s2);

  if (!strcmp(s1, s2))
  {
    printf("1\n");
  }
  else
  {
    printf("0\n");
  }

  return 0;
}