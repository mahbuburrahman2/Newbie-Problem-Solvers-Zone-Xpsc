#include <bits/stdc++.h>
using namespace std;
using int64 = long long;

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int tc;
  cin >> tc;
  while (tc--)
  {
    int64 n;
    cin >> n;

    if (n == 1)
    {
      cout << 0 << '\n';
      continue;
    }

    ll ans = 0;

    while ((n & 1) == 0)
    {
      n >>= 1;
      ans++;
    }

    if (n == 1)
    {
      cout << ans << '\n';
    }
    else if (n == 3)
    {
      cout << ans + 1 << '\n';
    }
    else
    {
      cout << -1 << '\n';
    }
  }
}
