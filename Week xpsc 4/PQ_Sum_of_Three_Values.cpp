#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n;
  ll x;
  cin >> n >> x;
  vector<pair<ll, int>> a(n);
  for (int i = 0; i < n; i++)
    cin >> a[i].first, a[i].second = i + 1;
  sort(a.begin(), a.end());
  for (int i = 0; i < n; i++)
  {
    for (int j = i + 1, k = n - 1; j < k;)
    {
      ll s = a[i].first + a[j].first + a[k].first;
      if (s == x)
      {
        int p[] = {a[i].second, a[j].second, a[k].second};
        sort(p, p + 3);
        cout << p[0] << " " << p[1] << " " << p[2];
        return 0;
      }
      if (s < x)
        j++;
      else
        k--;
    }
  }
  cout << "IMPOSSIBLE";
  return 0;
}
