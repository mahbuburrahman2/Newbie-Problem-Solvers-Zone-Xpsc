#include <bits/stdc++.h>
using namespace std;
using ll = long long;
bool isPrime1(ll n)
{
  if (n <= 1)
    return false;
  for (ll i = 2; i * i <= n; i++)
    if (n % i == 0)
      return false;
  return true;
}

ll isPrime2(ll x)
{
  while (!isPrime1(x))
    x++;
  return x;
}

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t;
  cin >> t;

  while (t--)
  {
    ll x;
    cin >> x;

    ll p = isPrime2(max(2LL, x));
    ll q = isPrime2(p + 1);

    ll y = p * q;

    cout << y << "\n";
  }
}
