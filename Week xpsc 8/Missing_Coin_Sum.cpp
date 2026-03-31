#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n;
  cin >> n;

  vector<ll> a(n);
  for (auto &x : a)
    cin >> x;

  sort(a.begin(), a.end());

  ll ans = 1;
  for (ll x : a)
  {
    if (x > ans)
      break;
    ans += x;
  }
  cout << ans << "\n";
  return 0;
}
