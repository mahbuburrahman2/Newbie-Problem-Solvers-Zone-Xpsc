#include <bits/stdc++.h>
using namespace std;

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t;
  if (!(cin >> t))
    return 0;
  while (t--)
  {
    int n;
    cin >> n;
    int k = 0;
    int m = 0;
    for (int i = 0; i < n; ++i)
    {
      int h;
      cin >> h;
      if (h == 1)
        m++;
      else
        k++;
    }
    int ans = k + (m + 1) / 2;
    cout << ans << '\n';
  }
  return 0;
}
