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

    int s = 0, x;
    for (int i = 0; i < n; i++)
    {
      cin >> x;
      s ^= x;
    }

    if (n % 2 == 1)
    {
      cout << s << "\n";
    }
    else
    {
      if (s == 0)
        cout << 0 << "\n";
      else
        cout << -1 << "\n";
    }
  }
  return 0;
}
