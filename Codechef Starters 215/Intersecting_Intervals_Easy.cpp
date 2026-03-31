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
    vector<ll> a(n), b(n);
    for (int i = 0; i < n; i++)
      cin >> a[i];
    for (int i = 0; i < n; i++)
      cin >> b[i];

    vector<ll> la(n), ra(n), lb(n), rb(n);

    ll cur = 0;
    for (int i = 0; i < n; i++)
    {
      cur = max(a[i], cur + a[i]);
      la[i] = cur;
    }
    cur = 0;
    for (int i = n - 1; i >= 0; i--)
    {
      cur = max(a[i], cur + a[i]);
      ra[i] = cur;
    }

    cur = 0;
    for (int i = 0; i < n; i++)
    {
      cur = max(b[i], cur + b[i]);
      lb[i] = cur;
    }
    cur = 0;
    for (int i = n - 1; i >= 0; i--)
    {
      cur = max(b[i], cur + b[i]);
      rb[i] = cur;
    }

    ll ans = LLONG_MIN;
    for (int i = 0; i < n; i++)
    {
      ans = max(ans, la[i] + rb[i]);
      ans = max(ans, lb[i] + ra[i]);

      ll contain_a = la[i] + ra[i] - a[i];
      ll contain_b = lb[i] + rb[i] - b[i];
      ans = max(ans, contain_a + contain_b);
    }

    cout << ans << '\n';
  }
  return 0;
}
