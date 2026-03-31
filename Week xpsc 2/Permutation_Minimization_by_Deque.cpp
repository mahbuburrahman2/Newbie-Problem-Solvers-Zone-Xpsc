#include <bits/stdc++.h>
using namespace std;
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
    vector<int> p(n);
    for (int i = 0; i < n; i++)
      cin >> p[i];
    deque<int> dq;
    for (int x : p)
    {
      if (dq.empty() || x > dq.front())
        dq.push_back(x);
      else
        dq.push_front(x);
    }
    for (int i = 0; i < n; i++)
    {
      cout << dq[i] << " ";
    }
    cout << "\n";
  }
  return 0;
}
