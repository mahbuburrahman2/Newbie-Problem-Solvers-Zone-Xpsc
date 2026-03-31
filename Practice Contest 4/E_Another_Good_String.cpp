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
    int n, q;
    cin >> n >> q;
    string s;
    cin >> s;
    int ans = 1, cur = 1;
    for (int i = 1; i < n; i++)
    {
      if (s[i] == s[i - 1])
        cur++;
      else
        cur = 1;
      ans = max(ans, cur);
    }
    cout << ans << ' ';
    char last = s.back();
    cur = 1;
    for (int i = n - 2; i >= 0 && s[i] == last; i--)
      cur++;
    while (q--)
    {
      char c;
      cin >> c;
      if (c == last)
        cur++;
      else
        cur = 1, last = c;
      ans = max(ans, cur);
      cout << ans << ' ';
    }
    cout << '\n';
  }
  return 0;
}
