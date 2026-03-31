#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int T;
  cin >> T;
  while (T--)
  {
    int n;
    ll p;
    cin >> n >> p;

    vector<vector<ll>> ct(n + 1, vector<ll>(n + 1, 0));
    vector<vector<ll>> dp(n + 1, vector<ll>(n + 1, 0));

    ct[1][1] = 1;

    for (int i = 1; i < n; i++)
    {
      // not a breakpoint
      for (int x = i + 1; x <= n; x++)
      {
        ll pref_ct = 0, pref_dp = 0;
        for (int y = x; y <= n; y++)
        {
          ll cur_ct = ct[x][y];
          ll cur_dp = dp[x][y];

          ll mul = (y < n ? y - i : y);
          ll pre_mul = (y < n ? 1 : i + 1);

          ct[x][y] = (cur_ct * mul + pre_mul * pref_ct) % p;
          dp[x][y] = (cur_dp * mul + pre_mul * pref_dp) % p;

          pref_ct = (pref_ct + cur_ct) % p;
          pref_dp = (pref_dp + cur_dp) % p;
        }
      }

      // is a breakpoint
      for (int y = i; y <= n; y++)
      {
        if (ct[i][y] == 0)
          continue;

        ll cur_ct = ct[i][y];
        ll cur_dp = dp[i][y];

        // small a[i]
        if (i + 1 < y && y < n)
        {
          ct[y][y] = (ct[y][y] + cur_ct * (y - i)) % p;
          dp[y][y] = (dp[y][y] + (cur_ct + cur_dp) * (y - i)) % p;
        }

        // larger a[i], but can't reach n
        int start = (y > i + 1 ? y + 1 : i + 1);
        for (int k = start; k < n; k++)
        {
          ct[k][k] = (ct[k][k] + cur_ct) % p;
          dp[k][k] = (dp[k][k] + (cur_ct + cur_dp)) % p;
        }

        // reach n
        ll mul = (y < n ? i + 1 : n);
        ct[n][n] = (ct[n][n] + cur_ct * mul) % p;
        dp[n][n] = (dp[n][n] + (cur_ct + cur_dp) * mul) % p;
      }
    }

    ll ans = (dp[n][n] * n) % p;
    cout << ans << "\n";
  }
}