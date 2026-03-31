#include <bits/stdc++.h>
using namespace std;
int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t;
  cin >> t;
  while (t--)
  {
    int w, p, k;
    cin >> w >> p >> k;
    int ans;
    if (k <= w)
      ans = k * 2;
    else
      ans = w * 2 + (k - w);
    cout << ans << "\n";
  }
}
