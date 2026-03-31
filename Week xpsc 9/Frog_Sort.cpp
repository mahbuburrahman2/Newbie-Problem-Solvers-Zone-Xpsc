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
    int n;
    cin >> n;

    vector<ll> w(n), l(n);
    for (int i = 0; i < n; i++)
      cin >> w[i];
    for (int i = 0; i < n; i++)
      cin >> l[i];

    vector<pair<ll, ll>> v(n);
    for (int i = 0; i < n; i++)
      v[i] = {w[i], i + 1};

    sort(v.begin(), v.end());

    ll ans = 0;
    ll last = v[0].second;

    for (int i = 1; i < n; i++)
    {
      ll pos = v[i].second;
      int idx = v[i].second - 1;

      while (pos <= last)
      {
        pos += l[idx];
        ans++;
      }
      last = pos;
    }

    cout << ans << '\n';
  }
  return 0;
}
