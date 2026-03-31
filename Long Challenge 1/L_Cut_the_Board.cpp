
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
    int n, m;
    cin >> n >> m;
    ll ans = 1LL * (n - 1) * (m - 1);
    cout << ans << "\n";
  }
  return 0;
}
