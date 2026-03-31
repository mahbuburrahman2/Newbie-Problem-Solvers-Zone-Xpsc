#include <bits/stdc++.h>
using namespace std;
using ll = long long;
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

    vector<int> a(n);
    for (int i = 0; i < n; i++)
      cin >> a[i];

    vector<int> b(n);
    for (int i = 0; i < n; i++)
      cin >> b[i];

    bool ok = true;
    for (int i = 0; i + 1 < n; i++)
    {
      int d1 = (a[i] < a[i + 1]);
      int d2 = (b[i] < b[i + 1]);

      if (d1 != d2)
      {
        ok = false;
        break;
      }
    }
    if (ok)
      cout << "Yes\n";
    else
      cout << "No\n";
  }
  return 0;
}
