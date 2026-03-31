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

    unordered_map<int, int> f;
    for (int i = 0, x; i < n; i++)
    {
      cin >> x;
      f[x]++;
    }

    int ans = 0, zeros = 0;
    for (auto &[v, c] : f)
    {
      if (v == 0)
        zeros = c;
      else
      {
        ans += (c & 1);
        zeros += c / 2;
      }
    }

    if (zeros)
      ans++;
    cout << ans << "\n";
  }
  return 0;
}
