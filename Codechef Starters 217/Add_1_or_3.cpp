#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int tcc;
  cin >> tcc;
  while (tcc--)
  {
    ll n, m;
    cin >> n >> m;
    if (m < n || m > 3 * n)
      cout << "NO\n";
    else if ((m - n) % 2 != 0)
      cout << "NO\n";
    else
      cout << "YES\n";
  }
  return 0;
}
