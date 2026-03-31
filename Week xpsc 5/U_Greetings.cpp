#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
using ll = long long;

template <class T>
using ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

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
    vector<pair<int, int>> v(n);
    for (auto &x : v)
      cin >> x.first >> x.second;
    sort(v.begin(), v.end());

    ordered_set<int> s;
    ll greet = 0;

    for (auto [a, b] : v)
    {
      greet += s.size() - s.order_of_key(b + 1);
      s.insert(b);
    }
    cout << greet << "\n";
  }
}
