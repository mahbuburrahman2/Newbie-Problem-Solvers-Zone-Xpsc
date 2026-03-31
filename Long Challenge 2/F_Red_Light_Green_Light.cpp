#include <bits/stdc++.h>
using namespace std;
int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int tc;
  cin >> tc;
  while (tc--)
  {
    int n, k;
    cin >> n >> k;

    int x, ans = 0;
    for (int i = 0; i < n; i++)
    {
      cin >> x;
      if (x > k)
        ans++;
    }
    cout << ans << "\n";
  }
  return 0;
}
