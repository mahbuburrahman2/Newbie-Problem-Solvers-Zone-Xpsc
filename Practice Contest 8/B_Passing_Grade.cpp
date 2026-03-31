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

    vector<int> a(n);
    for (auto &x : a)
      cin >> x;

    int c = a[0];
    int ans = 0;

    for (auto x : a)
    {
      if (x >= c)
        ans++;
    }
    cout << ans << '\n';
  }
}
