#include <iostream>
#include <cstring>
#include <cmath>
#include <iomanip>

using namespace std;

typedef long long ll;
ll memo[261][14];
int S, D, N;

ll solve(int s, int d)
{
  if (D == d)
  {
    return s == S;
  }

  if (s >= S)
  {
    return 0;
  }

  if (memo[s][d] != -1)
  {
    return memo[s][d];
  }

  ll ans = 0;
  for (int i = 1; i <= N; i++)
  {
    ans += solve(s + i, d + 1);
  }

  return memo[s][d] = ans;
}

int main()
{
  int C;
  long double ans;

  cin >> C;

  while (C--)
  {
    cin >> S >> D >> N;

    memset(memo, -1, sizeof memo);

    ans = solve(0, 0) / powl(N, D);

    cout << fixed << setprecision(N) << ans << endl;
  }

  return 0;
}
