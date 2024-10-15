#include <iostream>
#include <vector>
#include <queue>
#include <cstring>

using namespace std;

#define MAX_NODES 100001

int C, F, V[MAX_NODES];
vector<int> adj[MAX_NODES];

void bfs(int i)
{
  queue<int> q;

  q.push(i);
  V[i] = 1;

  while (!q.empty())
  {
    int ap = q.front();
    q.pop();

    for (int neighbor : adj[ap])
    {
      if (!V[neighbor])
      {
        q.push(neighbor);
        V[neighbor] = 1;
      }
    }
  }
}

int main()
{
  int X, Y, ans = 0;

  memset(V, 0, sizeof(V));

  cin >> C >> F;

  while (F--)
  {
    cin >> X >> Y;

    adj[X].push_back(Y);
    adj[Y].push_back(X);
  }

  for (int i = 1; i <= C; i++)
  {
    if (!V[i])
    {
      bfs(i);
      ans++;
    }
  }

  cout << ans << endl;

  return 0;
}
