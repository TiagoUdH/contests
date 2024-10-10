#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
  long double a, b, c, s, ans;

  cin >> a >> b >> c;

  s = (a + b + c) / 2;
  ans = sqrt(s * (s - a) * (s - b) * (s - c));

  cout << fixed << setprecision(3) << ans << " m2" << endl;

  return 0;
}