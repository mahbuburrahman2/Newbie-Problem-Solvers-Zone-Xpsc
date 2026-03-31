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
    ll n;
    cin >> n;
    ll a[n];
    for (ll i = 0; i < n; i++)
      cin >> a[i];
    ll ans = 1, idx = 0;
    set<ll> s;
    s.insert(a[0]);
    for (ll i = 1; i < n; i++)
    {
      if (s.count(a[i]))
        s.erase(a[i]);
      if (s.empty())
      {
        ans++;
        for (ll j = idx + 1; j <= i; j++)
          s.insert(a[j]);
        idx = i;
      }
    }
    cout << ans << "\n";
  }
  return 0;
}
