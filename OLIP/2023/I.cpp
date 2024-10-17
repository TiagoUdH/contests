#include <bits/stdc++.h>

using namespace std;

int main()
{
  int N;

  cin >> N;

  int V[N];

  for (int i = 0; i < N; i++)
  {
    cin >> V[i];
  }

  sort(V, V + N);

  if (N % 2 == 0)
  {
    cout << (V[N / 2] + V[N / 2 - 1]) / 2 << endl;
  }
  else
  {
    cout << V[N / 2] << endl;
  }

  return 0;
}