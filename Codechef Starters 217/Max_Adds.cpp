#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int tc;
  cin >> tc;

  while (tc--)
  {
    ll n, m;
    cin >> n >> m;

    vector<ll> a(n), b(n);
    for (int i = 0; i < n; i++)
      cin >> a[i];
    for (int i = 0; i < n; i++)
      cin >> b[i];

    ll all_num = 0;
    for (ll x : b)
      all_num += x;

    ll suffix = 0;
    ll c = 0;
    for (int i = n - 1; i >= 0; i--)
    {
      c = max(c, a[i] + suffix);
      suffix += b[i];
    }

    ll k = max(1LL, c - all_num);

    ll ans = 0;
    if (k <= m)
    {
      ans += (k - 1) * c;
      ll cnt = m - k + 1;

      ll sm = (k + m) * cnt;
      sm /= 2;
      ans += sm + cnt * all_num;
    }
    else
    {
      ans = m * c;
    }
    cout << ans << "\n";
  }
  return 0;
}
