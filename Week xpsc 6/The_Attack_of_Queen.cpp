#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  ll t;
  cin >> t;
  while (t--)
  {

    ll n, x, y;
    cin >> n >> x >> y;

    ll total = (n - 1) * 2;

    ll diag1 = min(x - 1, y - 1) + min(n - x, n - y);
    ll diag2 = min(x - 1, n - y) + min(n - x, y - 1);

    cout << total + diag1 + diag2 << "\n";
  }
  return 0;
}
