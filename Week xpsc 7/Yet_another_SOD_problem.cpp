#include <bits/stdc++.h>
using namespace std;
using ll = long long;

ll solve(ll x)
{
  if (x < 0)
    return 0;
  return x / 3;
}

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int tc;
  cin >> tc;
  while (tc--)
  {
    ll l, r;
    cin >> l >> r;
    ll ans = solve(r) - solve(l - 1);
    cout << ans << "\n";
  }
  return 0;
}
