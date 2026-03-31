#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n;
  cin >> n;

  vector<pair<ll, ll>> v(n);
  ll sm1 = 0;

  for (int i = 0; i < n; i++)
  {
    cin >> v[i].first >> v[i].second;
    sm1 += v[i].second;
  }

  sort(v.begin(), v.end());

  ll t = 0, sm2 = 0;
  for (auto &x : v)
  {
    t += x.first;
    sm2 += t;
  }

  cout << sm1 - sm2 << "\n";
  return 0;
}
