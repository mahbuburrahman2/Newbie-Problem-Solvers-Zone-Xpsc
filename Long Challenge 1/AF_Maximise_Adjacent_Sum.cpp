#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);

  int tc;
  cin >> tc;
  while (tc--)
  {
    int n;
    cin >> n;
    ll s = 0, mn1 = 1e18, mn2 = 1e18, x;
    for (int i = 0; i < n; i++)
    {
      cin >> x;
      s += x;
      if (x < mn1)
        mn2 = mn1, mn1 = x;
      else if (x < mn2)
        mn2 = x;
    }
    ll ans = (s - (mn1 + mn2)) + s;
    cout << ans << '\n';
  }
  return 0;
}
