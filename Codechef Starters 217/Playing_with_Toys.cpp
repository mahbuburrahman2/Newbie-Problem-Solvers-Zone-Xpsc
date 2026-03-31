#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n, m;
  cin >> n >> m;
  int ans;
  if (n > m)
    ans = n - m;
  else
    ans = 0;
  cout << ans;
  return 0;
}
