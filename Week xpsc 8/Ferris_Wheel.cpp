#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n;
  ll x;
  cin >> n >> x;
  vector<ll> p(n);

  for (ll &v : p)
    cin >> v;
  sort(p.begin(), p.end());

  int i = 0, j = n - 1;
  int ans = 0;
  while (i <= j)
  {
    if (p[i] + p[j] <= x)
    {
      i++;
    }
    j--;
    ans++;
  }
  cout << ans << "\n";
  return 0;
}
