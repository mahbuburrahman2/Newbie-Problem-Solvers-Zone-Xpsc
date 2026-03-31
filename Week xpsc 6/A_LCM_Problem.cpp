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
    ll l, r;
    cin >> l >> r;

    if (2 * l > r)
      cout << "-1 -1\n";
    else
      cout << l << " " << 2 * l << "\n";
  }
  return 0;
}
