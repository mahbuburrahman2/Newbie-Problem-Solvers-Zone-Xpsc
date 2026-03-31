#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int t;
  cin >> t;
  while (t--)
  {
    ll n, m, q;
    cin >> n >> m >> q;
    vector<ll> v(m);
    for (int i = 0; i < m; i++)
      cin >> v[i];
    sort(v.begin(), v.end());
    while (q--)
    {
      ll x;
      cin >> x;
      if (x <= v[0])
      {
        cout << v[0] - 1 << "\n";
      }
      else if (x >= v[m - 1])
      {
        cout << n - v[m - 1] << "\n";
      }
      else
      {
        int idx = lower_bound(v.begin(), v.end(), x) - v.begin();
        ll left = v[idx - 1];
        ll right = v[idx];
        cout << (right - left) / 2 << "\n";
      }
    }
  }
  return 0;
}
