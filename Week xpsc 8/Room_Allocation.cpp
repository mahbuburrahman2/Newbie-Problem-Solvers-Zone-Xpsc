#include <bits/stdc++.h>
using namespace std;
int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n;
  cin >> n;
  vector<array<int, 3>> v(n);
  for (int i = 0; i < n; i++)
    cin >> v[i][0] >> v[i][1], v[i][2] = i;

  sort(v.begin(), v.end());
  multiset<pair<int, int>> ms;
  vector<int> ans(n);
  int r = 0;

  for (auto &x : v)
  {
    auto it = ms.lower_bound({x[0], 0});
    if (it != ms.begin())
    {
      it--;
      ans[x[2]] = it->second;
      ms.erase(it);
    }
    else
    {
      ans[x[2]] = ++r;
    }
    ms.insert({x[1], ans[x[2]]});
  }

  cout << r << "\n";
  for (int x : ans)
    cout << x << " ";
  return 0;
}
