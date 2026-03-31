#include <bits/stdc++.h>
using namespace std;
using ll = long long;
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
    for (int i = 0; i < n; i++)
      cin >> a[i];

    ll g1 = 0, g2 = 0;

    for (int i = 0; i < n; i += 2)
      g1 = __gcd(g1, a[i]);

    for (int i = 1; i < n; i += 2)
      g2 = __gcd(g2, a[i]);

    bool ok1 = true, ok2 = true;

    for (int i = 1; i < n; i += 2)
      if (a[i] % g1 == 0)
        ok1 = false;

    for (int i = 0; i < n; i += 2)
      if (a[i] % g2 == 0)
        ok2 = false;

    if (ok1)
      cout << g1 << "\n";
    else if (ok2)
      cout << g2 << "\n";
    else
      cout << 0 << "\n";
  }
  return 0;
}
