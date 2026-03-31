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
    if (a == b)
      cout << a + b - 1 << "\n";
    else
      cout << a + b << "\n";
  }
  return 0;
}
