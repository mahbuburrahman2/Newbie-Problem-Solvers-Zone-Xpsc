#include <bits/stdc++.h>
using namespace std;
using ll = long long;

static const ll MOD = 1e9 + 7;

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int tc;
  cin >> tc;
  while (tc--)
  {
    int n, e = 0, o = 0;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
      int x;
      cin >> x;

      if (x % 2 == 0)
        e++;
      else
        o++;
    }

    ll ans = 1;
    while (e--)
      ans = ans * 2 % MOD;

    if (o == 0)
      ans = (ans - 1 + MOD) % MOD;

    cout << ans << '\n';
  }
  return 0;
}
