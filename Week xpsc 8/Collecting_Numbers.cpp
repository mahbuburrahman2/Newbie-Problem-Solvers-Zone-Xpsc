#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n;
  cin >> n;

  vector<int> idx(n + 1);
  for (int i = 0; i < n; i++)
  {
    int x;
    cin >> x;
    idx[x] = i;
  }
  int ans = 1;
  for (int i = 1; i < n; i++)
  {
    if (idx[i] > idx[i + 1])
      ans++;
  }
  cout << ans << "\n";
  return 0;
}
