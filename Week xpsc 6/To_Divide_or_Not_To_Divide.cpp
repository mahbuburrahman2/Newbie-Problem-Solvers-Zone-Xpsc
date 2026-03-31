#include <bits/stdc++.h>
using namespace std;
using ll = long long;

ll LCM(ll a, ll b)
{
  return (a / __gcd(a, b)) * b;
}
ll multi(ll a, ll n)
{
  return ((n + a - 1) / a) * a;
}

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int t;
  cin >> t;

  while (t--)
  {
    ll a, b, n;
    cin >> a >> b >> n;
    ll l = LCM(a, b);
    if (l == a)
    {
      cout << -1 << "\n";
      continue;
    }

    ll x = multi(a, n);
    if (x % l == 0)
      x += a;
    cout << x << "\n";
  }
  return 0;
}
