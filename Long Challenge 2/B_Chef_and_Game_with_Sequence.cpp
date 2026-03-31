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
    int n, x;
    cin >> n;

    int od = 0, ev = 0;
    for (int i = 0; i < n; i++)
    {
      cin >> x;
      if (x % 2 == 0)
        ev++;
      else
        od++;
    }

    ev += od / 2;
    int ans = 0;
    if (ev > 0)
      ans++;
    if (od % 2 == 1)
      ans++;
    cout << ans << "\n";
  }
  return 0;
}
