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
  cin >> n;

  pbds<int> c;
  for (int i = 1; i <= n; i++)
    c.insert(i);

  int idx = 1;
  while (!c.empty())
  {
    idx %= c.size();
    auto it = c.find_by_order(idx);
    cout << *it << " ";

    c.erase(it);
    idx += 1;
  }

  cout << "\n";
  return 0;
}

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//   ios::sync_with_stdio(false);
//   cin.tie(nullptr);

//   int n;
//   cin >> n;
//   deque<int> dq;
//   for (int i = 1; i <= n; i++)
//     dq.push_back(i);

//   while (!dq.empty())
//   {
//     dq.push_back(dq.front());
//     dq.pop_front();

//     cout << dq.front() << " ";
//     dq.pop_front();
//   }
//   cout << "\n";
//   return 0;
// }
