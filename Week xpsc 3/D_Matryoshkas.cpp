#include <bits/stdc++.h>
using namespace std;
int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int t;
  cin >> t;
  while (t--)
  {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
      cin >> a[i];
    }
    map<int, int> freq;
    for (int x : a)
      freq[x]++;
    int ans = 0, pre_sz = -1, pre_cnt = 0;
    for (auto [x, y] : freq)
    {
      if (pre_sz + 1 == x)
      {
        ans += max(0, y - pre_cnt);
      }
      else
        ans += y;
      pre_sz = x;
      pre_cnt = y;
    }
    cout << ans << "\n";
  }
  return 0;
}
