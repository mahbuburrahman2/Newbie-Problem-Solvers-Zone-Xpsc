#include <bits/stdc++.h>
using namespace std;
using ll = long long;
void solve()
{
  ll n;
  cin >> n;
  ll p = 1;
  while ((p << 1) <= n)
  {
    p = p << 1;
  }

  ll a = n - p + 1;
  ll b = p >> 1;
  ll ans;
  if (a > b)
  {
    ans = a;
  }
  else
  {
    ans = b;
  }
  cout << ans << "\n";
}

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t;
  cin >> t;
  while (t--)
  {
    solve();
  }
  return 0;
}
