#include <bits/stdc++.h>

using namespace std;

int main()
{
  char s1[1001], s2[1001];

  fgets(s1, sizeof(s1), stdin);
  s1[strcspn(s1, "\n")] = '\0';

  fgets(s2, sizeof(s2), stdin);
  s2[strcspn(s2, "\n")] = '\0';

  sort(s1, s1 + strlen(s1));
  sort(s2, s2 + strlen(s2));

  if (!strcmp(s1, s2))
  {
    printf("sim\n");
  }
  else
  {
    printf("nao\n");
  }

  return 0;
}
