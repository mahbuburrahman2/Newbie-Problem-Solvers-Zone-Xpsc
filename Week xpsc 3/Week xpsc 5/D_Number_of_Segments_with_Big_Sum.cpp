#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n;
  ll s;
  cin >> n >> s;
  vector<ll> a(n);
  for (auto &v : a)
    cin >> v;

  ll sum = 0, ans = 0;
  int r = 0;

  for (int l = 0; l < n; l++)
  {
    while (r < n && sum < s)
      sum += a[r++];
    if (sum >= s)
      ans += (n - r + 1);
    sum -= a[l];
  }
  cout << ans << "\n";
  return 0;
}
