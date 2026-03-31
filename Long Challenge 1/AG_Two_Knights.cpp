#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  ll n;
  cin >> n;

  for (ll k = 1; k <= n; k++)
  {
    ll sq = k * k;
    ll tot = sq * (sq - 1) / 2;

    ll bad = 0;
    if (k >= 3)
      bad = 4 * (k - 1) * (k - 2);
    cout << (tot - bad) << "\n";
  }
  return 0;
}
