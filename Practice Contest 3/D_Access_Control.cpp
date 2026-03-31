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
    int n, x;
    string s;
    cin >> n >> x >> s;
    int sw = 0;
    bool ok = true;

    for (char c : s)
    {
      if (c == '1')
        sw = x;
      else if (--sw < 0)
        ok = false;
    }

    if (ok)
      cout << "YES\n";
    else
      cout << "NO\n";
  }
}