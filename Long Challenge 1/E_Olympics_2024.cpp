#include <bits/stdc++.h>
using namespace std;
int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int a[3];
  for (int i = 0; i < 3; i++)
    cin >> a[i];

  int ans = 0;
  for (int i = 0; i < 3; i++)
  {
    if (a[i] < 5)
      ans += (5 - a[i]);
  }

  cout << ans;
  return 0;
}
