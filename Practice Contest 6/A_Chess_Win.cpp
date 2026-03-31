#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int a, b;
  cin >> a >> b;
  int ans = 0;
  while (a <= b)
  {
    a++;
    ans++;
  }
  cout << ans << "\n";
  return 0;
}
