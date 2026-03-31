#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t;
  cin >> t;
  while (t--)
  {
    int n;
    cin >> n;
    vector<ll> a(n);
    for (int i = 0; i < n; i++)
      cin >> a[i];

    ll mn = *min_element(a.begin(), a.end());
    ll min_diff = LLONG_MAX;

    for (int i = 0; i < n; i++)
    {
      if (a[i] > mn)
      {
        min_diff = min(min_diff, a[i] - mn);
      }
    }

    if (min_diff == LLONG_MAX)
    {
      // All elements are equal
      cout << -1 << '\n';
    }
    else
    {
      cout << max(mn, min_diff) << '\n';
    }
  }
  return 0;
}