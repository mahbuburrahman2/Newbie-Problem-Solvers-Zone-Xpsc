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
    ll a, b;
    cin >> a >> b;

    ll g = __gcd(a, b);

    if (a == b)
      cout << 0 << "\n";
    else
      cout << a - g << "\n";
  }
  return 0;
}
