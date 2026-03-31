#include <bits/stdc++.h>
using namespace std;

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int T;
  cin >> T;
  while (T--)
  {
    int a, b, c;
    cin >> a >> b >> c;

    int mn = min(a, min(b, c));
    int cnt = 0;
    if (a == mn)
      cnt++;
    if (b == mn)
      cnt++;
    if (c == mn)
      cnt++;

    if (cnt >= 2)
      cout << "YES\n";
    else
      cout << "NO\n";
  }
  return 0;
}
