#include <bits/stdc++.h>
using namespace std;
int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int t;
  cin >> t;
  while (t--)
  {
    string s;
    cin >> s;
    string tar = "CODETOWN";
    bool ok = true;
    for (int i = 0; i < 8; i++)
    {
      char a = s[i];
      char b = tar[i];
      bool v1 = (a == 'A' || a == 'E' || a == 'I' || a == 'O' || a == 'U');
      bool v2 = (b == 'A' || b == 'E' || b == 'I' || b == 'O' || b == 'U');
      if (v1 != v2)
      {
        ok = false;
        break;
      }
    }
    if (ok)
      cout << "YES" << "\n";
    else
      cout << "NO" << "\n";
  }
  return 0;
}