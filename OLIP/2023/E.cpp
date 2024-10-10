#include <iostream>

using namespace std;

int main()
{
  char a, b, c;

  while (cin >> a >> b >> c)
  {
    if (c == 'L')
    {
      cout << "Esse eh o meu lugar" << endl;
    }
    else
    {
      cout << "Oi, Leonard" << endl;
    }
  }

  return 0;
}
