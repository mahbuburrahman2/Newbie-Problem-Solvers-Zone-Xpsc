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
    for (auto &x : a)
      cin >> x;
    ll mn = *min_element(a.begin(), a.end());
    ll g = 0;
    bool min = false;

    for (ll x : a)
    {
      if (x == mn && !min)
      {
        min = true;
        continue;
      }
      if (x % mn == 0)
        g = gcd(g, x);
    }
    cout << (g == mn ? "Yes\n" : "No\n");
  }
  return 0;
}
