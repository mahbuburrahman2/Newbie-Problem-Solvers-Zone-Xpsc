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

    bool ok = true;
    for (int i = 0; i < n; i++)
    {
      int x;
      cin >> x;
      if (x % 2 == 0)
        ok = false;
    }
    if (ok)
    {
      cout << "YES" << "\n";
    }
    else
    {
      cout << "NO" << "\n";
    }
  }
  return 0;
}