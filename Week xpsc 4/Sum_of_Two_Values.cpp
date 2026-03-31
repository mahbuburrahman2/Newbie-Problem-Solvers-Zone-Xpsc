#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n;
  ll x;
  cin >> n >> x;
  vector<ll> a(n);
  for (int i = 0; i < n; i++)
    cin >> a[i];
  map<ll, int> mp;
  for (int i = 0; i < n; i++)
  {
    ll req = x - a[i];
    if (mp.count(req))
    {
      cout << mp[req] + 1 << " " << i + 1 << "\n";
      return 0;
    }
    mp[a[i]] = i;
  }
  cout << "IMPOSSIBLE\n";
  return 0;
}
