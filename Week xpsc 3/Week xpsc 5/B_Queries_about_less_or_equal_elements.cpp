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
  pbds<int> p;
  for (int i = 1; i <= n; i++)
  {
    int x;
    cin >> x;
    p.insert(x);
  }
  for (int i = 1; i <= m; i++)
  {
    int x;
    cin >> x;
    cout << p.order_of_key(x + 1) << " ";
  }
  cout << "\n";
}
