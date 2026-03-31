#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int T;
  cin >> T;
  while (T--)
  {
    ll N;
    cin >> N;
    ll A = N;
    while (A % 2 == 0)
      A /= 2;
    ll B = N / A;
    ll x = 0, y = 0;
    for (int i = 0; i < 30; i++)
    {
      int a = (A >> i) & 1;
      int b = (B >> i) & 1;
      if (a)
      {
        if (b)
          x |= (1LL << i);
        else
          x |= y |= (1LL << i);
      }
    }
    cout << x << " " << y << "\n";
  }
}
