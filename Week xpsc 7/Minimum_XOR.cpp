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
    int n;
    cin >> n;
    vector<int> a(n);
    int tot = 0;
    for (int &x : a)
    {
      cin >> x;
      tot ^= x;
    }

    int ans = tot;
    for (int x : a)
    {
      ans = min(ans, tot ^ x);
    }
    cout << ans << "\n";
  }
}
