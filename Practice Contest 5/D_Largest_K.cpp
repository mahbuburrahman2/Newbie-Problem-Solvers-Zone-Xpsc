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
    ll x, y;
    cin >> x >> y;

    ll k = y / (x - 1);

    cout << k << "\n";
  }
  return 0;
}
