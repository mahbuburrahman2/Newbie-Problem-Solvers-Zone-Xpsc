#include <bits/stdc++.h>
using namespace std;

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n, x, ops = 0;
  cin >> n >> x;
  bool p[101] = {};
  for (int i = 0; i < n; i++)
  {
    int num;
    cin >> num;
    p[num] = 1;
  }
  for (int i = 0; i < x; i++)
    if (p[i] == 0)
      ops++;

  if (p[x])
    ops++;
  cout << ops;
}
