#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);
  int t;
  cin >> t;
  while (t--)
  {
    int n, k;
    cin >> n >> k;
    vector<int> a(n), h(n);

    for (int i = 0; i < n; i++)
      cin >> a[i];
    for (int i = 0; i < n; i++)
      cin >> h[i];

    ll sum = 0;
    int l = 0, ans = 0;
    for (int r = 0; r < n; r++)
    {
      if (r && h[r - 1] % h[r])
        sum = 0, l = r;
      sum += a[r];
      while (sum > k)
        sum -= a[l++];
      ans = max(ans, r - l + 1);
    }
    cout << ans << '\n';
  }
}
