#include <bits/stdc++.h>
using namespace std;
int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int x;
  cin >> x;
  int ans = 1000;
  for (int i = 0; i < 4 - x; i++)
  {
    ans *= 2;
  }
  cout << ans << "\n";
  return 0;
}