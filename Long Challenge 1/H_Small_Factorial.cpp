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
    ll n, ans = 1;
    cin >> n;
    for (ll i = 2; i <= n; i++)
      ans *= i;
    cout << ans << "\n";
  }
  return 0;
}
