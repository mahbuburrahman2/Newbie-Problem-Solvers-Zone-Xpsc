#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
  ios::sync_with_stdio(false);
  cin.tie(NULL);

  int tc;
  cin >> tc;

  while (tc--)
  {
    ll x, m;
    cin >> x >> m;

    ll cnt = 0;
    ll h = 1;

    while (h < x)
    {
      h <<= 1;
      cnt++;
    }

    ll ans = m - cnt;
    if (ans < 0)
      ans = 0;

    cout << ans << '\n';
  }
  return 0;
}
