#include <bits/stdc++.h>
using namespace std;
int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n, q;
  cin >> n >> q;
  vector<priority_queue<int>> vq(n);
  for (int i = 0; i < q; i++)
  {
    int type;
    cin >> type;
    if (type == 0)
    {
      int t, x;
      cin >> t >> x;
      vq[t].push(x);
    }
    else if (type == 1)
    {
      int t;
      cin >> t;
      if (!vq[t].empty())
        cout << vq[t].top() << "\n";
    }
    else if (type == 2)
    {
      int t;
      cin >> t;
      if (!vq[t].empty())
        vq[t].pop();
    }
  }
  return 0;
}
