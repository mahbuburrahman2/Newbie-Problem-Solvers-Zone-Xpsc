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
    int n, m;
    cin >> n >> m;

    vector<int> s(m + 1);
    while (n--)
    {
      int x;
      cin >> x;
      s[x] = 1;
    }

    int ans = 0;
    for (int i = 1; i <= m; i++)
      if (s[i] == 0)
        ans++;
    cout << ans << '\n';
  }
}
