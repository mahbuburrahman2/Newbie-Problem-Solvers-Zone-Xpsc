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
  for (ll &x : a)
    cin >> x;
  ll m = *max_element(a.begin(), a.end());

  ll g = 0;
  ll s = 0;
  for (ll x : a)
  {
    ll d = m - x;
    if (d > 0)
    {
      if (g == 0)
        g = d;
      else
        g = gcd(g, d);
    }
    s += d;
  }
  cout << s / g << " " << g << "\n";
  return 0;
}
