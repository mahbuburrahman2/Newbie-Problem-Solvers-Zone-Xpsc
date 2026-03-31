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

    vector<int> a(n);
    for (int i = 0; i < n; i++)
      cin >> a[i];

    int sum = 0;
    for (int i = 0; i + 1 < n; i++)
      sum += abs(a[i] - a[i + 1]);

    int mx = 0;
    for (int i = 0; i < n; i++)
    {
      int cur = 0;
      if (i == 0)
        cur = abs(a[0] - a[1]);

      else if (i == n - 1)
        cur = abs(a[n - 2] - a[n - 1]);

      else
      {
        int hi = max(a[i - 1], a[i + 1]);
        int lo = min(a[i - 1], a[i + 1]);

        if (a[i] > hi)
          cur = 2 * (a[i] - hi);
        else if (a[i] < lo)
          cur = 2 * (lo - a[i]);
      }

      if (cur > mx)
        mx = cur;
    }
    cout << sum - mx << '\n';
  }
  return 0;
}
