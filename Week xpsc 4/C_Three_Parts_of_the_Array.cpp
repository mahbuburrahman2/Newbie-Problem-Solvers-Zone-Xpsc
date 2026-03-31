#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n;
  cin >> n;
  vector<ll> a(n);
  for (int i = 0; i < n; i++)
    cin >> a[i];

  ll l = 0, r = 0, ans = 0;
  int i = 0, j = n - 1;

  while (i <= j)
  {
    if (l < r)
      l += a[i++];
    else
      r += a[j--];
    if (l == r)
      ans = l;
  }
  cout << ans << "\n";
}
