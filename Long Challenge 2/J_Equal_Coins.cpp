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
    ll x, y;
    cin >> x >> y;
    ll s = x + 2 * y;
    if (s % 2 != 0)
    {
      cout << "NO\n";
      continue;
    }

    ll t = s / 2;
    ll mx = t / 2;
    if (mx > y)
      mx = y;
    ll ans = t - (mx * 2);
    if (ans <= x)
      cout << "YES\n";
    else
      cout << "NO\n";
  }
  return 0;
}
