#include <bits/stdc++.h>
using namespace std;
using ll = long long;

static const ll MOD = 998244353;
int n;
vector<vector<int>> g;
vector<deque<ll>> dp0, dp1;

void dfs(int u, int p)
{
  dp1[u].clear();
  dp0[u].clear();

  dp1[u].push_back(0);
  dp1[u].push_back(1);
  dp0[u].push_back(0);

  for (int v : g[u])
  {
    if (v == p)
      continue;
    dfs(v, u);

    int m = max(dp0[v].size(), dp1[v].size());
    deque<ll> tot(m, 0);

    for (int i = 0; i < dp0[v].size(); i++)
      tot[i] = (tot[i] + dp0[v][i]) % MOD;
    for (int i = 0; i < dp1[v].size(); i++)
      tot[i] = (tot[i] + dp1[v][i]) % MOD;

    int s1 = dp1[u].size();
    int s0 = dp0[u].size();

    deque<ll> new1(s1 + m, 0);
    deque<ll> new0(max(s0, m), 0);

    for (int i = 0; i < s1; i++)
      new1[i] = dp1[u][i];
    for (int i = 0; i < s0; i++)
      new0[i] = dp0[u][i];

    for (int i = 1; i < s1; i++)
      for (int j = 1; j < m; j++)
        new1[i + j] = (new1[i + j] + dp1[u][i] * tot[j]) % MOD;

    for (int i = 1; i < s0; i++)
      for (int j = 1; j < m; j++)
        if (i + j + 1 < new1.size())
          new1[i + j + 1] =
              (new1[i + j + 1] + dp0[u][i] * tot[j]) % MOD;

    for (int j = 1; j < m; j++)
      new0[j] = (new0[j] + tot[j]) % MOD;

    dp1[u].swap(new1);
    dp0[u].swap(new0);
  }
}

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int T;
  cin >> T;
  while (T--)
  {
    cin >> n;
    g.assign(n + 1, {});
    dp0.assign(n + 1, {});
    dp1.assign(n + 1, {});

    for (int i = 0; i < n - 1; i++)
    {
      int u, v;
      cin >> u >> v;
      g[u].push_back(v);
      g[v].push_back(u);
    }

    dfs(1, 0);

    for (int k = 1; k <= n; k++)
    {
      ll ans = 0;
      if (k < dp0[1].size())
        ans += dp0[1][k];
      if (k < dp1[1].size())
        ans += dp1[1][k];
      cout << ans % MOD << (k == n ? '\n' : ' ');
    }
  }
  return 0;
}