#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve()
{
  int n;
  ll x;
  cin >> n >> x;

  vector<ll> a(n);
  for (auto &v : a)
    cin >> v;

  vector<int> L(n, 1), R(n, 1);

    for (int i = 1; i < n; i++)
  {
    if (a[i] >= a[i - 1])
      L[i] = L[i - 1] + 1;
  }

  for (int i = n - 2; i >= 0; i--)
  {
    if (a[i] <= a[i + 1])
      R[i] = R[i + 1] + 1;
  }

  int ans = *max_element(L.begin(), L.end());

  for (int i = 0; i < n; i++)
  {
    ll val = a[i] * x;
    int cur = 1;

    if (i > 0 && val >= a[i - 1])
      cur += L[i - 1];

    if (i < n - 1 && val <= a[i + 1])
      cur += R[i + 1];

    ans = max(ans, cur);
  }

  cout << ans << '\n';
}

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t;
  cin >> t;
  while (t--)
    solve();

  return 0;
}
