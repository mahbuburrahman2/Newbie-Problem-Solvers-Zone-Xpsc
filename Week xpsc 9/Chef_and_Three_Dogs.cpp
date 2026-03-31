#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int tc;
  cin >> tc;
  cout << fixed << setprecision(9);

  while (tc--)
  {
    double s, v;
    cin >> s >> v;
    double ans = (2.0 * s) / (3.0 * v);
    cout << ans << "\n";
  }
  return 0;
}
