#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);
  int t;
  cin >> t;
  while (t--)
  {
    ll n, k, q;
    cin >> n >> k >> q;
    ll ans = 0, cnt = 0;
    for (int i = 0; i < n; i++)
    {
      ll x;
      cin >> x;
      if (x <= q)
        cnt++;
      else
      {
        if (cnt >= k)
          ans += (cnt - k + 1) * (cnt - k + 2) / 2;
        cnt = 0;
      }
    }
    if (cnt >= k)
      ans += (cnt - k + 1) * (cnt - k + 2) / 2;
    cout << ans << "\n";
  }
}
