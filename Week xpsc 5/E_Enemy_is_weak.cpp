#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using ll = long long;
using namespace __gnu_pbds;

template <class T>
using ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n;
  cin >> n;
  vector<ll> a(n);
  for (int i = 0; i < n; i++)
    cin >> a[i];

  vector<ll> left(n, 0), right(n, 0);
  ordered_set<ll> s1, s2;

  for (int i = 0; i < n; i++)
  {
    ll less_eq = s1.order_of_key(a[i] + 1);
    left[i] = s1.size() - less_eq;
    s1.insert(a[i]);
  }

  for (int i = n - 1; i >= 0; i--)
  {
    right[i] = s2.order_of_key(a[i]);
    s2.insert(a[i]);
  }

  ll ans = 0;
  for (int i = 0; i < n; i++)
    ans += left[i] * right[i];

  cout << ans << "\n";
}
