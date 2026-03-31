#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
  int tc;
  cin >> tc;
  while (tc--)
  {
    ll n;
    cin >> n;
    ll a[n];
    map<ll, ll> m1;
    for (ll i = 0; i < n; i++)
    {
      ll x;
      cin >> x;
      if (x == 0)
        m1[1]++;
      else
        m1[0]++;
    }
    ll ma = -1;
    for (auto i : m1)
    {
      ma = max(ma, i.second);
    }
    cout << ma << endl;
  }
  return 0;
}