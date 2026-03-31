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
    int x, y, z;
    cin >> x >> y >> z;

    int left = max(x - y, x - z);
    int right = min(x + y, x + z);

    if (left > right)
    {
      cout << 0 << "\n";
      continue;
    }
    int ans = right - left + 1;
    if (left <= x && x <= right)
      ans--;
    cout << ans << "\n";
  }
  return 0;
}
