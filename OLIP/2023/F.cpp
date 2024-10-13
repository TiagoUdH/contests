#include <iostream>
#include <cctype>
#include <cstring>

using namespace std;

int main()
{
  char s[20];

  cin >> s;

  for (int i = 0; s[i]; i++)
  {
    s[i] = tolower(s[i]);
  }

  if (!strcmp(s, "oposicao") || !strcmp(s, "contrariedade"))
  {
    cout << "mas" << endl;
  }
  else if (!strcmp(s, "quantidade") || !strcmp(s, "intensidade"))
  {
    cout << "mais" << endl;
  }

  return 0;
}
