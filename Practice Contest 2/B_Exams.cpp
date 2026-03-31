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
    int all_st = x * y, pass = z;
    if (pass * 2 > all_st)
      cout << "YES\n";
    else
      cout << "NO\n";
  }
  return 0;
}
