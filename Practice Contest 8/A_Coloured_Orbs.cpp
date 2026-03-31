#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int r, b;
  cin >> r >> b;
  int g = min(r, b);

  int ans = 5 * g;
  ans += r - g;
  ans += 2 * (b - g);
  cout << ans;
}
