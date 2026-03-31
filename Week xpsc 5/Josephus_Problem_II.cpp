#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;

template <class T>
using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n;
  long long k;
  cin >> n >> k;

  pbds<int> c;
  for (int i = 1; i <= n; i++)
    c.insert(i);

  int idx = 0;
  for (int i = 0; i < n; i++)
  {
    idx = (idx + k) % c.size();
    auto it = c.find_by_order(idx);
    cout << *it << " ";
    c.erase(it);
  }
  cout << "\n";
  return 0;
}
