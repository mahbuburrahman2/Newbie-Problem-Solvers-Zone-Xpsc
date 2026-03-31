#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);
  int t;
  cin >> t;
  while (t--)
  {
    int n;
    cin >> n;
    ll g, x;
    cin >> g;
    for (int i = 1; i < n; i++)
    {
      cin >> x;
      g = gcd(g, x);
    }
    if (g == 1)
      cout << 2 << "\n";
    else
    {
      x = 2;
      while (gcd(x, g) != 1)
      {
        x++;
      }
      cout << x << "\n";
    }
  }
}
