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
    int n, m;
    cin >> n >> m;

    vector<ll> l(n), r(m);

    for (int i = 0; i < n; i++)
      l[i] = 2LL * (i + 1);

    for (int j = 0; j < m; j++)
      r[j] = 2LL * j + 3;

    for (int i = 0; i < n; i++)
    {
      for (int j = 0; j < m; j++)
      {
        cout << l[i] + r[j];
        if (j + 1 < m)
          cout << ' ';
      }
      cout << "\n";
    }
  }

  return 0;
}
