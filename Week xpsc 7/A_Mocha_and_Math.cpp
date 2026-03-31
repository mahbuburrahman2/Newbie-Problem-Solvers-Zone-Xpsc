#include <bits/stdc++.h>
using namespace std;
void solve()
{
  int n, x;
  cin >> n >> x;

  int ans = x;
  for (int i = 1; i < n; i++)
  {
    cin >> x;
    ans = ans & x;
  }
  cout << ans << "\n";
}
int main()
{
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  int t;
  cin >> t;
  while (t--)
  {
    solve();
  }
  return 0;
}
