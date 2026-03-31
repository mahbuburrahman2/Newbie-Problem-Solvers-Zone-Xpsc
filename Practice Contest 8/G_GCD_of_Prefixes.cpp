#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int tc;
  cin >> tc;
  while (tc--)
  {
    int n;
    cin >> n;

    vector<ll> b(n), a(n);
    for (auto &x : b)
      cin >> x;

    bool ok = true;
    a[0] = b[0];

    for (int i = 1; i < n; i++)
    {
      if (gcd(b[i - 1], b[i]) != b[i])
      {
        ok = false;
        break;
      }
      a[i] = b[i];
    }

    if (!ok)
    {
      cout << -1 << '\n';
    }
    else
    {
      for (auto x : a)
        cout << x << ' ';
      cout << '\n';
    }
  }
  return 0;
}
