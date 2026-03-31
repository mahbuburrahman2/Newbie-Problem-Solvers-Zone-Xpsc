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
    ll n, sum = 0;
    cin >> n;

    vector<ll> a(n);
    for (int i = 0; i < n; i++)
    {
      cin >> a[i];
      sum += a[i];
    }
    if (sum % n != 0)
    {
      cout << "Impossible\n";
      continue;
    }
    ll mean = sum / n;
    int ans = -1;
    for (int i = 0; i < n; i++)
    {
      if (a[i] == mean)
      {
        ans = i + 1;
        break;
      }
    }
    if (ans == -1)
      cout << "Impossible" << "\n";
    else
      cout << ans << "\n";
  }
  return 0;
}
