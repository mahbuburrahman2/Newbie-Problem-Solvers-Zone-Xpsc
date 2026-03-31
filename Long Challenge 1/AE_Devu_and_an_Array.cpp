#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n, q;
  cin >> n >> q;

  ll x;
  cin >> x;
  ll mn = x, mx = x;
  for (int i = 1; i < n; i++)
  {
    cin >> x;
    if (x < mn)
      mn = x;
    if (x > mx)
      mx = x;
  }

  while (q--)
  {
    ll t;
    cin >> t;
    if (mn <= t && t <= mx)
      cout << "Yes\n";
    else
      cout << "No\n";
  }
  return 0;
}
