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
    ll x, y, k;
    cin >> x >> y >> k;
    if (k == 0)
    {
      cout << "Chef\n";
      continue;
    }
    ll ans = (x + y) / k;
    if (ans % 2 == 0)
    {
      cout << "Chef\n";
    }
    else
    {
      cout << "Paja\n";
    }
  }
  return 0;
}
