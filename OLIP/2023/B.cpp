#include <iostream>

using namespace std;

int main()
{
  int X, Y, Z;

  cin >> X >> Y >> Z;

  if (X * X != Y * Y + Z * Z)
  {
    cout << "Nao eh retangulo!" << endl;
  }
  else
  {
    int c, t, ans;

    t = Y * Z / 2;
    c = 3 * Z * Z / 8;
    ans = c + t;

    cout << "AREA = " << ans << endl;
  }

  return 0;
}