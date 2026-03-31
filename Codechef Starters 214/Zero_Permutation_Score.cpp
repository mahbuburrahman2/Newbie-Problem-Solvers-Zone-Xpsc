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
    int n;
    cin >> n;
    if (n <= 3)
    {
      cout << 0 << "\n";
      continue;
    }
    int k = n / 2;
    ll ans;
    if (n % 2 == 0)
    {
      ans = 1LL * (k - 1) * (k - 1);
    }
    else
    {
      ans = 1LL * k * (k - 1);
    }
    cout << ans << "\n";
  }
  return 0;
}
