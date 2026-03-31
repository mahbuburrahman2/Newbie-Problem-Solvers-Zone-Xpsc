#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  ll n, ans = 0, last = 0;
  cin >> n;

  vector<pair<int, int>> m(n);
  for (int i = 0; i < n; i++)
  {
    int a, b;
    cin >> a >> b;
    m[i] = {b, a};
  }
  sort(m.begin(), m.end());
  for (auto &x : m)
  {
    if (x.second >= last)
    {
      ans++;
      last = x.first;
    }
  }
  cout << ans;
  return 0;
}
