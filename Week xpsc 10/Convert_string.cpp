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
    string s;
    cin >> n >> s;

    int z = 0;
    for (char c : s)
      if (c == '0')
        z++;

    int o = n - z;
    int ans = 0;

    for (int k = 1; k <= n; k++)
    {
      if ((k >= z && (k - z) % 2 == 0) ||
          (k >= o && (k - o) % 2 == 0))
      {
        ans++;
      }
    }

    cout << ans << '\n';
  }
  return 0;
}
