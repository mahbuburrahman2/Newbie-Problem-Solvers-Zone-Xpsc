#include <bits/stdc++.h>
using namespace std;
int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int tcc;
  cin >> tcc;
  while (tcc--)
  {

    int n;
    cin >> n;
    string s;
    cin >> s;
    string d = s + s;
    int m = 2 * n;

    vector<int> nxt(m);
    int p = m;
    for (int i = m - 1; i >= 0; i--)
    {
      if (d[i] == '1')
        p = i;
      nxt[i] = p;
    }

    int res = 0;
    for (int i = 0; i < n; i++)
    {
      if (s[i] == '0')
      {
        int j = nxt[i];
        int dist = j - i;
        res = max(res, dist);
      }
    }
    cout << res << '\n';
  }
  return 0;
}
