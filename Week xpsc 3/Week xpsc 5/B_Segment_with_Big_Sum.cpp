#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);

  int n;
  ll s;
  cin >> n >> s;
  vector<ll> a(n);
  for (auto &x : a)
    cin >> x;

  ll sum = 0;
  int l = 0, ans = n + 1;

  for (int r = 0; r < n; r++)
  {
    sum += a[r];
    while (sum - a[l] >= s)
      sum -= a[l++];
    if (sum >= s)
      ans = min(ans, r - l + 1);
  }

  if (ans == n + 1)
    cout << -1;
  else
    cout << ans;
  return 0;
}
