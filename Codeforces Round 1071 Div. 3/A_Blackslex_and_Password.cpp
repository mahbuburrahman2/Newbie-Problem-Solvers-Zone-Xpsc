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
    int k, x;
    cin >> k >> x;

    vector<pair<int, int>> g;
    for (int i = 0; i < x; i++)
    {
      g.push_back({i, 0});
    }

    int n = 0;
    while (true)
    {
      int idx = n % x;
      g[idx].second++;
      n++;

      if (g[idx].second > k)
      {
        cout << n << endl;
        break;
      }
    }
  }
  return 0;
}
