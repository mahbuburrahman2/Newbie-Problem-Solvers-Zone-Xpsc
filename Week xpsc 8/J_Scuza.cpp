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
    int n, q;
    cin >> n >> q;
    vector<ll> a(n), pref(n), mx(n);
    for (int i = 0; i < n; i++)
      cin >> a[i];

    pref[0] = a[0];
    for (int i = 1; i < n; i++)
      pref[i] = pref[i - 1] + a[i];

    mx[0] = a[0];
    for (int i = 1; i < n; i++)
      mx[i] = max(mx[i - 1], a[i]);

    while (q--)
    {
      ll k;
      cin >> k;
      int pos = upper_bound(mx.begin(), mx.end(), k) - mx.begin();
      if (pos == 0)
        cout << 0 << " ";
      else
        cout << pref[pos - 1] << " ";
    }
    cout << '\n';
  }
  return 0;
}
