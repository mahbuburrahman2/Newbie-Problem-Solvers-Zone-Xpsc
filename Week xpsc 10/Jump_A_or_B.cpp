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
    ll n, m, a, b;
    cin >> n >> m >> a >> b;

    ll mn = n * a, mx = n * b;
    if (m < mn || m > mx)
    {
      cout << "No\n";
      continue;
    }
    ll ans = mx - m;
    if (ans % (b - a) == 0)
      cout << "Yes\n";
    else
      cout << "No\n";
  }

  return 0;
}
