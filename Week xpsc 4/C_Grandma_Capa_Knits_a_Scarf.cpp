#include <bits/stdc++.h>
using namespace std;
int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);
  int t;
  cin >> t;
  while (t--)
  {
    int n;
    string s;
    cin >> n >> s;
    int l = 0, r = n - 1;
    while (l < r && s[l] == s[r])
      l++, r--;
    if (l >= r)
    {
      cout << 0 << '\n';
      continue;
    }
    int ans = 1e9;
    for (char c : {s[l], s[r]})
    {
      int L = 0, R = n - 1, del = 0;
      while (L < R)
      {
        if (s[L] == s[R])
          L++, R--;
        else if (s[L] == c)
          L++, del++;
        else if (s[R] == c)
          R--, del++;
        else
        {
          del = 1e9;
          break;
        }
      }
      ans = min(ans, del);
    }
    if (ans == 1e9)
      cout << -1 << '\n';
    else
      cout << ans << '\n';
  }
}
