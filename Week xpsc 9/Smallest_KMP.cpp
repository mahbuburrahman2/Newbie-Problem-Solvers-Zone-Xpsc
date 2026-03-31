#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);

  int tc;
  cin >> tc;
  while (tc--)
  {
    string s, p;
    cin >> s >> p;

    vector<int> c(26);
    for (char x : s)
      c[x - 'a']++;
    for (char x : p)
      c[x - 'a']--;

    char f = p[0];
    string a, b, d;

    for (int i = 0; i < 26; i++)
    {
      char x = 'a' + i;
      if (x < f)
        a += string(c[i], x);

      else if (x == f)
        b += string(c[i], x);

      else
        d += string(c[i], x);
    }

    string x = a + p + b + d;
    string y = a + b + p + d;

    string ans = min(x, y);
    cout << ans << '\n';
  }
  return 0;
}
