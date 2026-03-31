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
    int n;
    cin >> n;
    bool ans = 0;
    for (int i = 0; i < n; i++)
    {
      int x;
      cin >> x;

      if (x % 2 == 0)
      {
        ans = 1;
      }
    }
    cout << (ans ? "NO\n" : "YES\n");
  }
  return 0;
}
