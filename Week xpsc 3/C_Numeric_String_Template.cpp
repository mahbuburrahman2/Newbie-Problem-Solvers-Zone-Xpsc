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
    int n;
    cin >> n;
    vector<int> a(n);
    for (auto &x : a)
      cin >> x;

    int m;
    cin >> m;
    while (m--)
    {
      string s;
      cin >> s;
      if ((int)s.size() != n)
      {
        cout << "NO\n";
        continue;
      }

      map<int, char> mp1;
      map<char, int> mp2;
      bool ok = true;

      for (int i = 0; i < n; ++i)
      {
        if ((mp1.count(a[i]) && mp1[a[i]] != s[i]) ||
            (mp2.count(s[i]) && mp2[s[i]] != a[i]))
        {
          ok = false;
          break;
        }
        mp1[a[i]] = s[i];
        mp2[s[i]] = a[i];
      }
      if (ok)
        cout << "YES\n";
      else
        cout << "NO\n";
    }
  }
}
