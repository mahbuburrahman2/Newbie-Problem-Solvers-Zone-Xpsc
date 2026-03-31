#include <bits/stdc++.h>
using namespace std;
int quad(int x, int y)
{
  if (x > 0 && y > 0)
    return 1;
  if (x < 0 && y > 0)
    return 2;
  if (x < 0 && y < 0)
    return 3;
  return 4;
}
int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int x, y;
  cin >> x >> y;
  cout << quad(x, y);
  return 0;
}
