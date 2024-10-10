#include <iostream>
#include <vector>
#include <numeric>
#include <iomanip>

using namespace std;

long long mdc(long long a, long long b)
{
  if (b == 0)
  {
    return a;
  }
  return mdc(b, a % b);
}

long long mmc(long long a, long long b)
{
  return a * b / mdc(a, b);
}

int main()
{
  vector<long long> c(3);
  long long total = 0, mmcc = 1;
  long double ans;

  for (int i = 0; i < 3; i++)
  {
    cin >> c[i];
    mmcc = mmc(mmcc, c[i]);
  }

  for (int i = 0; i < 3; i++)
  {
    total += mmcc / c[i];
  }

  ans = static_cast<long double>(mmcc) / total;

  cout << fixed << setprecision(3) << ans << endl;

  return 0;
}
