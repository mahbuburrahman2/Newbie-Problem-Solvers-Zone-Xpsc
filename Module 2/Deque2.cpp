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
    cin >> dq[i];
  }

  for (auto val : dq)
  {
    cout << val << " ";
  }
  cout << '\n';

  dq.push_front(8);
  dq.push_front(2);
  dq.pop_front();
  dq.pop_front();

  for (auto val : dq)
  {
    cout << val << " ";
  }
  cout << '\n';
  cout << dq.front() << " " << dq.back() << '\n';
  return 0;
}
