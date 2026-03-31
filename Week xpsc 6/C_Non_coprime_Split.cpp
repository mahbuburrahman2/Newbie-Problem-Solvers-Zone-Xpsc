#include <bits/stdc++.h>
using namespace std;

int non_coprime(int n)
{
  if (n == 2)
    return -1;
  if (n % 2 == 0)
    return 2;
  for (int i = 3; 1LL * i * i <= n; i += 2)
    if (n % i == 0)
      return i;
  return -1;
}

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t;
  cin >> t;
  while (t--)
  {
    int l, r;
    cin >> l >> r;

    if (l == 1)
    {
      if (r < 4)
        cout << -1 << "\n";
      else
        cout << 2 << " " << 2 << "\n";
      continue;
    }

    if (r >= 2 * l)
    {
      cout << l << " " << l << "\n";
      continue;
    }

    bool ok = false;
    for (int s = l; s <= r; ++s)
    {
      int d = non_coprime(s);
      if (d != -1 && s - d > 0)
      {
        cout << d << " " << (s - d) << "\n";
        ok = true;
        break;
      }
    }
    if (!ok)
      cout << -1 << "\n";
  }
  return 0;
}
