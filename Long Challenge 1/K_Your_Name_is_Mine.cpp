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
    string m, w;
    cin >> m >> w;

    int i = 0;
    for (char c : w)
      if (i < m.size() && m[i] == c)
        i++;
    bool ok1 = (i == m.size());

    int j = 0;
    for (char c : m)
      if (j < w.size() && w[j] == c)
        j++;
    bool ok2 = (j == w.size());

    if (ok1 || ok2)
      cout << "YES\n";
    else
      cout << "NO\n";
  }
  return 0;
}
