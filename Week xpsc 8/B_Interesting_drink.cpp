#include <bits/stdc++.h>
using namespace std;

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n;
  cin >> n;

  vector<int> x(n);
  for (int i = 0; i < n; i++)
    cin >> x[i];

  sort(x.begin(), x.end());

  int q;
  cin >> q;

  while (q--)
  {
    int m;
    cin >> m;
    int l = 0, r = n - 1, ans = -1;

    while (l <= r)
    {
      int mid = (l + r) / 2;
      if (x[mid] <= m)
      {
        ans = mid;
        l = mid + 1;
      }
      else
      {
        r = mid - 1;
      }
    }

    int cnt = ans + 1;
    cout << cnt << "\n";
  }
  return 0;
}
