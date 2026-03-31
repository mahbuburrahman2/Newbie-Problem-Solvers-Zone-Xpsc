#include <bits/stdc++.h>
using namespace std;
using ll = long long;

ll ansgcd(ll a, ll b)
{
  while (b != 0)
  {
    ll tmp = b;
    b = a % b;
    a = tmp;
  }
  return a;
}
int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t;
  cin >> t;
  while (t--)
  {
    int n;
    cin >> n;
    vector<ll> a(n);
    for (auto &x : a)
      cin >> x;

    ll g = 0;
    for (auto x : a)
      g = ansgcd(g, x);

    bool ok = true;
    for (auto x : a)
      if (x != 0 && x != g)
        ok = false;

    if (ok)
      cout << "YES\n";
    else
      cout << "NO\n";
  }
}
