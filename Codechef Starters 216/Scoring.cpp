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
    int x, y;
    cin >> x >> y;

    int b = (y - x) / 2;
    int a = b + x;

    cout << a << " " << b << "\n";
  }
  return 0;
}
