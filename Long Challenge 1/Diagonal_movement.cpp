#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
  int tc;
  cin >> tc;
  while (tc--)
  {
    ll x, y;
    cin >> x >> y;

    if ((x & 1) == (y & 1))
      cout << "YES\n";
    else
      cout << "NO\n";
  }
  return 0;
}
