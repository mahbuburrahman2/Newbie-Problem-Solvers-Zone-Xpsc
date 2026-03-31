#include <bits/stdc++.h>
using namespace std;
using ll = long long;
ll GCD(ll a, ll b)
{
  return __gcd(a, b);
}

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  ll l, r;
  cin >> l >> r;

  cout << "YES\n";

  for (ll i = l; i <= r; i += 2)
  {
    if (GCD(i, i + 1) == 1)
    {
      cout << i << " " << i + 1 << "\n";
    }
    else
    {
      cout << i << " " << i + 1 << "\n";
    }
  }

  return 0;
}
