#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int tcc;
  cin >> tcc;
  while (tcc--)
  {

    ll n, l, r;
    cin >> n >> l >> r;

    vector<ll> a(n);
    for (ll &x : a)
      cin >> x;

    sort(a.begin(), a.end());
    ll ans = 0;
    for (int i = 0; i < n; i++)
    {
      ll mn = l - a[i];
      ll mx = r - a[i];

      auto ok = a.begin() + i + 1;
      int lo_mn = lower_bound(ok, a.end(), mn) - a.begin();
      int lo_mx = upper_bound(ok, a.end(), mx) - a.begin() - 1;

      if (lo_mn <= lo_mx)
        ans += (lo_mx - lo_mn + 1);
    }
    cout << ans << "\n";
  }
  return 0;
}
