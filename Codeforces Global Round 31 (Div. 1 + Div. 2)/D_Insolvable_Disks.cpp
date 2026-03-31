#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int tcc;
  cin >> tcc;
  while (tcc--)
  {
    int n;
    cin >> n;

    vector<ll> x(n);
    for (int i = 0; i < n; i++)
    {
      cin >> x[i];
    }

    if (n <= 1)
    {
      cout << 0 << '\n';
      continue;
    }

    vector<ll> d(n - 1);
    for (int i = 0; i + 1 < n; i++)
    {
      d[i] = x[i + 1] - x[i];
    }

    ll ans = n - 1;
    bool ok = false;

    for (int i = 1; i < n - 1; i++)
    {
      if (d[i] > d[i - 1])
        ok = true;
      else if (d[i] < d[i - 1])
      {
        if (ok)
          ans--;
        ok = false;
      }
    }
    cout << ans << '\n';
  }
  return 0;
}
