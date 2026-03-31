#include <bits/stdc++.h>
using namespace std;
int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n, k;
  cin >> n >> k;
  vector<long long> a(n);

  for (int i = 0; i < n; i++)
  {
    cin >> a[i];
  }

  while (k--)
  {
    long long key;
    cin >> key;

    int l = 0, r = n - 1;
    int ans = -1;

    while (l <= r)
    {
      int mid = (l + r) / 2;

      if (a[mid] <= key)
      {
        ans = mid;
        l = mid + 1;
      }
      else
      {
        r = mid - 1;
      }
    }

    if (ans == -1)
      cout << 0 << "\n";
    else
      cout << ans + 1 << "\n";
  }

  return 0;
}
