#include <iostream>
using namespace std;
using ll = long long;
int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int tc;
  cin >> tc;
  while (tc--)
  {
    int n;
    cin >> n;

    ll x, xr = 0;
    for (int i = 0; i < n; i++)
    {
      cin >> x;
      xr ^= x;
    }
    int ans = xr * 2;
    cout << ans << "\n";
  }
  return 0;
}
