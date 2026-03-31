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
    vector<ll> a(n + 1), pref(n + 1);

    for (int i = 1; i <= n; i++)
    {
      cin >> a[i];
      pref[i] = pref[i - 1] + a[i];
    }
    ll total = pref[n];
    while (q--)
    {
      int l, r;
      ll k;
      cin >> l >> r >> k;
      ll oldsum = pref[r] - pref[l - 1];
      ll newsum = total - oldsum + (r - l + 1) * k;
      if (newsum % 2 == 1)
        cout << "YES\n";
      else
        cout << "NO\n";
    }
  }

  return 0;
}
