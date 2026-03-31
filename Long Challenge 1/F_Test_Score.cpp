#include <bits/stdc++.h>
using namespace std;
int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int tc;
  cin >> tc;
  while (tc--)
  {
    int n, x, y;
    cin >> n >> x >> y;

    if (y % x == 0 && y / x <= n)
      cout << "YES\n";
    else
      cout << "NO\n";
  }
  return 0;
}