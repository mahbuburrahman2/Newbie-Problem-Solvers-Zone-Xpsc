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
    ll x;
    cin >> n >> x;

    ll l = 0, e = 0, g = 0;
    for (int i = 0; i < n; i++)
    {
      ll a;
      cin >> a;
      if (a < x)
        l++;
      else if (a == x)
        e++;
      else
        g++;
    }

    if (l == 0 || g == 0 || e > 0)
      cout << "Yes\n";
    else
      cout << "No\n";
  }
  return 0;
}
