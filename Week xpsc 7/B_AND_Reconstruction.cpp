#include <bits/stdc++.h>
using namespace std;
using ll = long long;
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
    vector<ll> b(n - 1);
    for (auto &x : b)
      cin >> x;
    bool ok = true;

    for (int i = 1; i + 1 < (int)b.size(); i++)
    {
      if ((b[i - 1] & b[i + 1] & ~b[i]) != 0)
      {
        ok = false;
        break;
      }
    }

    if (!ok)
    {
      cout << "-1\n";
      continue;
    }

    vector<ll> a(n);

    a.front() = b[0];
    for (int i = 1; i < n - 1; i++)
      a[i] = b[i - 1] | b[i];
    a.back() = b[n - 2];

    for (int i = 0; i < n; i++)
    {
      cout << a[i];
      if (i + 1 < n)
        cout << ' ';
    }
    cout << '\n';
  }
}
