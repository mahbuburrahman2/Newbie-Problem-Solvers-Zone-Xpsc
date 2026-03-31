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
    cin >> n;

    vector<int> a(n);
    for (int &x : a)
      cin >> x;

    ll dp[3] = {(ll)1e18, (ll)1e18, (ll)1e18};

    for (int x = a[0]; x <= 2; x++)
      dp[x] = x - a[0];

    for (int i = 1; i < n; i++)
    {
      ll nd[3] = {(ll)1e18, (ll)1e18, (ll)1e18};
      for (int x = a[i]; x <= 2; x++)
      {
        ll best = min(dp[(x + 1) % 3], dp[(x + 2) % 3]);
        nd[x] = best + (x - a[i]);
      }
      memcpy(dp, nd, sizeof(dp));
    }

    cout << min({dp[0], dp[1], dp[2]}) << "\n";
  }
  return 0;
}
