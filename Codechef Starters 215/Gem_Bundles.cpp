#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int Tc;
  cin >> Tc;
  while (Tc--)
  {
    int r, b, g;
    cin >> r >> b >> g;

    int B = r;
    if (b < B)
      B = b;
    if (g < B)
      B = g;

    int rem = r + b + g - 3 * B;
    int ans = B * 10 + rem * 3;

    cout << ans << "\n";
  }
  return 0;
}
