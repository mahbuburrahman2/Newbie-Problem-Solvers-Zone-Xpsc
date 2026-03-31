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
    ll n, q;
    cin >> n >> q;

    ll sum1 = 0;
    for (ll i = 0; i < n; ++i)
    {
      ll x;
      cin >> x;
      sum1 += x;
    }

    ll sum2 = 0;
    for (ll i = 0; i < q; ++i)
    {
      ll l, r;
      cin >> l >> r;
      if ((r - l) % 2 == 0)
        ++sum2;
    }
    cout << sum1 + sum2 << '\n';
  }
  return 0;
}
