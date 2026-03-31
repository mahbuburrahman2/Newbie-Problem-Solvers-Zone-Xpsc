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
    for (auto &x : a)
      cin >> x;

    bool ok = false;
    for (int i = 0; i + 1 < n; i++)
    {
      if (a[i] > a[i + 1])
      {
        cout << i + 1 << " " << i + 2 << '\n';
        ok = true;
        break;
      }
    }

    if (!ok)
      cout << -1 << '\n';
  }
}
