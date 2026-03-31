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

    int idx = 1, ans = -1;
    for (int i = 1; i <= n; i++)
    {
      int d, t;
      cin >> d >> t;
      int v = d / t;
      if (v > ans)
      {
        ans = v;
        idx = i;
      }
    }
    cout << idx << "\n";
  }
  return 0;
}
