#include <bits/stdc++.h>
using namespace std;
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

    vector<int> a(n);
    int mx = 0;
    for (int i = 0; i < n; i++)
    {
      cin >> a[i];
      mx = max(mx, a[i]);
    }

    vector<int> pos(mx + 1, -1);

    for (int i = 0; i < n; i++)
    {
      pos[a[i]] = i + 1;
    }

    int ans = -1;
    for (int i = 1; i <= mx; i++)
    {
      if (pos[i] == -1)
        continue;

      for (int j = 1; j <= mx; j++)
      {
        if (pos[j] == -1)
          continue;

        if (__gcd(i, j) == 1)
        {
          ans = max(ans, pos[i] + pos[j]);
        }
      }
    }
    cout << ans << "\n";
  }
  return 0;
}
