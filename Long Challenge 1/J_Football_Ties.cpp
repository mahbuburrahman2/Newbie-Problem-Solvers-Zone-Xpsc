#include <bits/stdc++.h>
using namespace std;
int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int tc;
  cin >> tc;
  while (tc--)
  {
    int x, y;
    cin >> x >> y;
    int min_draws = x % 3;
    cout << min_draws << '\n';
  }
  return 0;
}
