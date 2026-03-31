#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
using ll = long long;

template <class T>
using pbds = tree<T, null_type, less_equal<T>, rb_tree_tag, tree_order_statistics_node_update>;

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n, m;
  cin >> n >> m;

  pbds<pair<ll, int>> s;
  for (int i = 0; i < n; i++)
  {
    ll x;
    cin >> x;
    s.insert({x, i});
  }
  while (m--)
  {
    ll t;
    cin >> t;
    auto it = s.upper_bound({t, INT_MAX});
    if (it == s.begin())
    {
      cout << -1 << "\n";
    }
    else
    {
      it--;
      cout << it->first << "\n";
      s.erase(it);
    }
  }
  return 0;
}
