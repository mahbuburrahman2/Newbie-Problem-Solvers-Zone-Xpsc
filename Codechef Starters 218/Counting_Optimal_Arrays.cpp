#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const ll modi = 998244353;

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(NULL);

  int tc;
  cin >> tc;

  while (tc--)
  {
    ll n, m;
    cin >> n >> m;
    if (n == 1)
    {
      cout << (m + 1) % modi << "\n";
      continue;
    }

    ll p = 1;
    while ((p << 1) <= m)
    {
      p <<= 1;
    }

    ll mx = (p << 1) - 1;
    ll lo = mx - m;
    if (lo < 0)
      lo = 0;
    ll ans = m - lo + 1;

    if (ans < 0)
      ans = 0;

    cout << ans % modi << "\n";
  }

  return 0;
}
