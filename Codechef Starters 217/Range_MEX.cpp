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
    int n, k;
    cin >> n >> k;

    vector<int> a(n);
    vector<bool> b(k, false);

    for (int i = 0; i < n; i++)
    {
      cin >> a[i];
      if (a[i] < k)
        b[a[i]] = true;
    }

    int ans = 0;
    for (int i = 0; i < k; i++)
    {
      if (!b[i])
        ans++;
    }
    if (ans > 0)
    {
      cout << ans + 1 << "\n";
      continue;
    }
    cout << 1 << "\n";
  }
  return 0;
}