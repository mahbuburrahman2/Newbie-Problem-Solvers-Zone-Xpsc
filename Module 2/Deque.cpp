#include <bits/stdc++.h>
using namespace std;

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n;
  cin >> n;
  deque<int> dq(n);
  for (int i = 0; i < n; i++)
  {
    // int x;
    // cin >> x;
    // dq.push_back(x);
    cin >> dq[i];
  }

  dq.push_front(8);
  dq.push_front(2);

  for (auto val : dq)
  {
    cout << val << " ";
  }
  cout << '\n';

  dq.pop_front();

  for (auto val : dq)
  {
    cout << val << " ";
  }

  return 0;
}
