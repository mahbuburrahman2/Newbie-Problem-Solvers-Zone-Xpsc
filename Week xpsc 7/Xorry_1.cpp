#include <bits/stdc++.h>
using namespace std;
using ll = long long;
bool getBit(ll x, int bit)
{
  return (x >> bit) & 1;
}
int highestBit(ll x)
{
  for (int bit = 31; bit >= 0; bit--)
  {
    if (getBit(x, bit))
      return bit;
  }
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
    ll x;
    cin >> x;
    int hb = highestBit(x);
    ll p = 1LL << hb;
    ll a = x ^ p;
    ll b = p;
    cout << a << " " << b << "\n";
  }
  return 0;
}
