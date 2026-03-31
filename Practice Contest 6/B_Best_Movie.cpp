#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int tc;
  cin >> tc;
  while (tc--)
  {
    int n, r, c;
    cin >> n;

    int ans = -1;
    while (n--)
    {
      cin >> r >> c;
      if (r >= 7)
      {
        if (ans == -1 || c < ans)
          ans = c;
      }
    }
    cout << ans << '\n';
  }
  return 0;
}
