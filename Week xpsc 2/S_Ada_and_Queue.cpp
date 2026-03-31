#include <bits/stdc++.h>
using namespace std;
int main()
{
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  int q;
  cin >> q;
  deque<int> d;
  bool rev = false;
  while (q--)
  {
    string cmd;
    cin >> cmd;
    if (cmd == "reverse")
      rev = (rev == false);
    else if (cmd == "toFront" || cmd == "push_back")
    {
      int n;
      cin >> n;
      if (cmd == "toFront")
      {
        if (rev)
          d.push_back(n);
        else
          d.push_front(n);
      }
      else
      {
        if (rev)
          d.push_front(n);
        else
          d.push_back(n);
      }
    }
    else if (d.empty())
      cout << "No job for Ada?\n";
    else if ((cmd == "front" && !rev) || (cmd == "back" && rev))
    {
      cout << d.front() << "\n";
      d.pop_front();
    }
    else
    {
      cout << d.back() << "\n";
      d.pop_back();
    }
  }
  return 0;
}
