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
    int n;
    cin >> n;
    vector<ll> a(n);
    for (ll &x : a)
      cin >> x;
    string s;
    cin >> s;

    vector<ll> pref(n + 1);
    for (int i = 0; i < n; i++)
      pref[i + 1] = pref[i] + a[i];

    ll ans = 0;
    int l = 0, r = n - 1;
    while (l < r)
    {
      while (l < n && s[l] == 'R')
        l++;
      while (r >= 0 && s[r] == 'L')
        r--;
      if (l < r)
      {
        ans += pref[r + 1] - pref[l];
        l++;
        r--;
      }
    }
    cout << ans << '\n';
  }
}
