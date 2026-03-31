#include <bits/stdc++.h>
using namespace std;

void solve()
{
  int a, b;
  cin >> a >> b;

  if (a == b)
  {
    cout << "0\n";
    return;
  }

  int x = (a ^ b);
  if (x < a)
  {
    cout << "1\n";
    cout << x << "\n";
    return;
  }

  if (a < b && x > a)
  {
    cout << "-1\n";
    return;
  }

  int t = (a | b);
  int x1 = (a ^ t);
  int x2 = (t ^ b);

  cout << "2\n";
  cout << x1 << " " << x2 << "\n";
}

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t;
  cin >> t;
  while (t--)
  {
    solve();
  }
  return 0;
}