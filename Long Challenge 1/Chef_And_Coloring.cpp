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
    int n;
    cin >> n;

    string s;
    cin >> s;
    int r = 0, g = 0, b = 0;
    for (char c : s)
    {
      if (c == 'R')
        r++;
      else if (c == 'G')
        g++;
      else
        b++;
    }
    int ans = max({r, g, b});
    cout << (n - ans) << "\n";
  }
  return 0;
}