#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
using ll = long long;
using pii = pair<int, int>;

template <class T>
using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t;
  if (!(cin >> t))
    return 0;
  while (t--)
  {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; ++i)
      cin >> a[i];

    pbds<pii> p;
    ll ans = 0;

    for (int i = n - 1; i >= 0; --i)
    {
      ans += p.order_of_key({a[i], INT_MAX});
      p.insert({a[i], i});
    }
    cout << ans << '\n';
  }
  return 0;
}
