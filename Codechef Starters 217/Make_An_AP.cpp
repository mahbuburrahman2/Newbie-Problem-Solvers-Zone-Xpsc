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

    vector<ll> a(n);
    for (int i = 0; i < n; i++)
      cin >> a[i];

    ll d = 0;
    for (int i = 1; i < n; i++)
      d = gcd(d, a[i] - a[i - 1]);

    ll ans = 0;
    for (int i = 1; i < n; i++)
    {
      ll faka = a[i] - a[i - 1];
      ll angsho = faka / d;
      ans += angsho - 1;
    }

    cout << ans << "\n";
  }
  return 0;
}
