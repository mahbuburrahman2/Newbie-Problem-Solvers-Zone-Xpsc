#include <bits/stdc++.h>
using namespace std;

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  // int n;
  // cin >> n;
  // vector<int> v;
  // for (int i = 0; i < n; i++)
  // {
  //   int x;
  //   cin >> x;
  //   v.push_back(x);
  // }

  // for (int i = 0; i < v.size(); i++)
  // {
  //   cout << v[i] << " ";
  // }
  // cout << '\n';

  // auto it = v.begin() + 1;
  // cout << *it << '\n';

  // for (auto it = v.begin(); it != v.end(); it++)
  // {
  //   cout << *it << " ";
  // }
  // cout << '\n';

  int n;
  cin >> n;
  vector<int> v;
  for (int i = 0; i < n; i++)
  {
    int x;
    cin >> x;
    v.push_back(x);
  }
  // auto lastelement = --v.end();
  //  lastelement--;

  // cout << *lastelement << '\n';

  // reverse(v.begin(), v.end());
  // sort(v.begin(), v.end(), greater<int>());
  sort(v.begin(), v.end());
  for (auto val : v)
  {
    cout << val << " ";
  }
  cout << '\n';

  auto mn = min_element(v.begin(), v.end());
  // cout << *mn << '\n';
  auto mx = max_element(v.begin(), v.end());
  // cout << *mx << '\n';

  int maxElementPosition = mx - v.begin();
  cout << maxElementPosition << '\n';
  return 0;
}
