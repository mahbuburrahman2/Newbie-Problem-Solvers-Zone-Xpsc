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
    int h, x, y;
    cin >> h >> x >> y;
    if (y >= h)
      cout << 1 << endl;
    else
    {
      int a = (h + x - 1) / x;
      int b = 1 + (h - y + x - 1) / x;
      if (a < b)
        cout << a << endl;
      else
        cout << b << endl;
    }
  }
  return 0;
}
