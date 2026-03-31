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
    int c1 = 0, c2 = 0, c3 = 0;

    for (int i = 0; i < n; i++)
    {
      int x;
      cin >> x;
      if (x == 1)
        c1++;
      else if (x == 2)
        c2++;
      else
        c3++;
    }

    int rem1 = min(c1, c3);
    int rem2 = max(0, c2 - 1);

    cout << rem1 + rem2 << "\n";
  }
  return 0;
}
