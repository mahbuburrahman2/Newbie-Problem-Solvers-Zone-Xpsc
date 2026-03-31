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
    int n;
    cin >> n;
    string s;
    cin >> s;

    int c = 0, a = 0, ans = 0;

    for (int i = 0; i < s.size(); i++)
    {
      if (s[i] == '1')
        c++;
      if (s[i] == '0')
        a++;
      if (c > a)
        ans++;
    }

    cout << ans << "\n";
  }
  return 0;
}
