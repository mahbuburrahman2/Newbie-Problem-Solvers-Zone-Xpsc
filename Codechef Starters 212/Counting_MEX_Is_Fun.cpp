#include <bits/stdc++.h>
using namespace std;
int main()
{
  ios::sync_with_stdio(false);
  cin.tie(0);

  int t;
  cin >> t;
  int mod = 1000000007;

  vector<pair<int, int>> q(t);
  int mx = 0;
  for (int i = 0; i < t; i++)
  {
    cin >> q[i].first >> q[i].second;
    mx = max(mx, q[i].first);
  }

  vector<vector<int>> s(mx, vector<int>(mx, 0));
  s[0][0] = 1;
  for (int n = 1; n < mx; n++)
  {
    for (int k = 1; k <= n; k++)
    {
      s[n][k] = (s[n - 1][k - 1] + 1LL * (n - 1) * s[n - 1][k]) % mod;
    }
  }

  // power of 2
  vector<int> p2(mx + 1, 1);
  for (int i = 1; i <= mx; i++)
    p2[i] = (p2[i - 1] * 2LL) % mod;

  for (int i = 0; i < t; i++)
  {
    int n = q[i].first;
    int k = q[i].second;

    if (n == 1)
    {
      if (k == 1)
        cout << 1 << "\n";
      else
        cout << 0 << "\n";
      continue;
    }

    int e = k - 2;
    if (e < 1 || e > n - 1)
      cout << 0 << "\n";
    else
      cout << 1LL * s[n - 1][e] * p2[e] % mod << "\n";
  }
  return 0;
}
