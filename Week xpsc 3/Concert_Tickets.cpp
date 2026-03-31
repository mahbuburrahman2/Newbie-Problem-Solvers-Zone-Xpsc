#include <bits/stdc++.h>
using namespace std;

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n, m;
  cin >> n >> m;

  multiset<int> ms;
  for (int i = 0; i < n; i++)
  {
    int p;
    cin >> p;
    ms.insert(p);
  }

  for (int i = 0; i < m; i++)
  {
    int t;
    cin >> t;

    auto it = ms.upper_bound(t);

    if (it == ms.begin())
    {
      cout << -1 << "\n";
    }
    else
    {
      it--;
      cout << *it << "\n";
      ms.erase(it);
    }
  }

  return 0;
}
