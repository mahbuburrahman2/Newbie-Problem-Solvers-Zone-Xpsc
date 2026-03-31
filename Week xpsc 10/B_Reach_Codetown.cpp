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
    string s;
    cin >> s;

    bool ok = 1;
    for (int i = 0; i < 8; i++)
    {
      char c = s[i];
      char d = "CODETOWN"[i];

      bool v1 = (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');
      bool v2 = (d == 'A' || d == 'E' || d == 'I' || d == 'O' || d == 'U');

      if (v1 != v2)
      {
        ok = 0;
        break;
      }
    }

    cout << (ok ? "YES\n" : "NO\n");
  }

  return 0;
}
