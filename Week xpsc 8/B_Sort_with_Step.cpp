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
    int n, k;
    cin >> n >> k;

    vector<int> p(n + 1);
    for (int i = 1; i <= n; i++)
      cin >> p[i];

    int x = -1, y = -1, cnt = 0;
    for (int i = 1; i <= n; i++)
    {
      if ((i - p[i]) % k != 0)
      {
        cnt++;
        if (x == -1)
          x = i;
        else
          y = i;
      }
    }

    if (cnt == 0)
      cout << 0 << "\n";
    else if (cnt != 2)
      cout << -1 << "\n";
    else
    {
      if ((x - p[y]) % k == 0 &&
          (y - p[x]) % k == 0)
        cout << 1 << "\n";
      else
        cout << -1 << "\n";
    }
  }

  return 0;
}
