#include <bits/stdc++.h>
using namespace std;
int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int q;
  cin >> q;
  set<int> s;
  while (q--)
  {
    int type, x;
    cin >> type >> x;

    if (type == 1)
    {
      s.insert(x);
    }
    else if (type == 2)
    {
      s.erase(x);
    }
    else if (type == 3)
    {
      if (s.find(x) != s.end())
        cout << "Yes\n";
      else
        cout << "No\n";
    }
  }
  return 0;
}
