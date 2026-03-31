#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t;
  if (!(cin >> t))
    return 0;
  while (t--)
  {
    int n;
    cin >> n;
    string a, b;
    cin >> a >> b;

    ll grp_a = 0, grp_b = 0;
    ll cnt_a = 0, cnt_b = 0;

    for (int i = 1; i <= n; ++i)
    {
      int idx = i - 1;
      if (i % 2 == 1)
      {
        if (a[idx] == '1')
          grp_a++;
        if (b[idx] == '1')
          grp_b++;
        cnt_b++;
      }
      else
      {
        if (b[idx] == '1')
          grp_a++;
        if (a[idx] == '1')
          grp_b++;
        cnt_a++;
      }
    }

    bool ok = true;
    if (grp_a > cnt_a)
      ok = false;
    if (grp_b > cnt_b)
      ok = false;

    if (ok)
      cout << "YES\n";
    else
      cout << "NO\n";
  }
  return 0;
}
