#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
  int n;
  cin >> n;
  vector<ll> a(n);

  ll sum = 0;
  for (ll &x : a)
    cin >> x, sum += x;

  ll ans = LONG_MAX;
  int l = 1 << n;
  for (int m = 0; m < l; m++)
  {
    ll s = 0;
    for (int i = 0; i < n; i++)
      if (m & (1 << i))
        s += a[i];

    ll d = sum - 2 * s;
    if (d < 0)
      d = -d;
    ans = min(ans, d);
  }
  cout << ans;
  return 0;
}
