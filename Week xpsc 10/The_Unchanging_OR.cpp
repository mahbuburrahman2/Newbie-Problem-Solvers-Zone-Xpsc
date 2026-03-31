#include <bits/stdc++.h>
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

    int x = __lg(n);
    int ans = 0;

    for (int i = 1; i < x; i++)
      ans += (1 << i) - 1;

    ans += n - (1 << x);

    cout << ans << '\n';
  }
  return 0;
}
