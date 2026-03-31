#include <bits/stdc++.h>
using namespace std;
int main()
{

  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t;
  cin >> t;
  while (t--)
  {
    int x, y, z;
    cin >> x >> y >> z;
    int need = x * y;
    int have = z * 24 * 60;
    if (need <= have)
      cout << "YES" << "\n";
    else
      cout << "NO" << "\n";
  }
  return 0;
}
