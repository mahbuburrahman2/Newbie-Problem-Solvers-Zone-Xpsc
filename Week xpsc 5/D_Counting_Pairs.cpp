#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);

  int t;
  cin >> t;
  while (t--)
  {
    int n;
    ll x, y;
    cin >> n >> x >> y;

    vector<ll> a(n);
    for (auto &v : a)
      cin >> v;

    ll sum = 0;
    for (auto v : a)
      sum += v;

    ll L = sum - y, R = sum - x;
    sort(a.begin(), a.end());

    ll ans = 0, cnt1 = 0, cnt2 = 0;
    int j;

    j = n - 1;
    for (int i = 0; i < n; i++)
    {
      while (j > i && a[i] + a[j] > R)
        j--;
      if (j > i)
        cnt1 += j - i;
    }

    j = n - 1;
    for (int i = 0; i < n; i++)
    {
      while (j > i && a[i] + a[j] > L - 1)
        j--;
      if (j > i)
        cnt2 += j - i;
    }
    ans = cnt1 - cnt2;
    cout << ans << "\n";
  }
}
