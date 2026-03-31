#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
  int tc;
  cin >> tc;

  while (tc--)
  {
    ll n, m;
    cin >> n >> m;

    for (int i = 0; i < n; i++)
    {
      for (int j = 0; j < m; j++)
      {
        int val;

        if (n <= m)
        {
          int x = (n + 1) * i;
          int y = (i + 1) * j;
          val = x + y + 1;
        }
        else
        {
          int x = (m + i + 1) * j;
          val = x + i + 1;
        }

        cout << val << " ";
      }
      cout << '\n';
    }
  }
  return 0;
}
