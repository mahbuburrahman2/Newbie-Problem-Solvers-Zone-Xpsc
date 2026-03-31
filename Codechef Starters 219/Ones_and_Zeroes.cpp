#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(NULL);

  int tc;
  cin >> tc;
  while (tc--)
  {
    int n, bal = 0, ans = 0;
    string s;
    cin >> n >> s;

    for (char c : s)
    {
      if (c == '1')
        bal++;
      else
        bal--;

      if (bal >= 0)
        ans++;
    }

    cout << ans << '\n';
  }
  return 0;
}
