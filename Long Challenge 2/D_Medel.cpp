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

    vector<ll> a(n);
    for (int i = 0; i < n; i++)
      cin >> a[i];

    while (n >= 3)
    {
      ll x = a[0], y = a[1], z = a[2];

      ll mn = x;
      if (y < mn)
        mn = y;
      if (z < mn)
        mn = z;

      ll mx = x;
      if (y > mx)
        mx = y;
      if (z > mx)
        mx = z;

      ll med = x + y + z - mn - mx;

      int p = 0;
      while (a[p] != med)
        p++;
      for (int i = p; i + 1 < n; i++)
        a[i] = a[i + 1];

      n--;
    }

    for (int i = 0; i < n; i++)
    {
      if (i)
        cout << ' ';
      cout << a[i];
    }
    cout << '\n';
  }
  return 0;
}
