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
    int n, c;
    cin >> n >> c;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
      cin >> a[i];
    }
    string s;
    cin >> s;
    int sum0 = 0, sum1 = 0;
    for (int i = 0; i < n; i++)
    {
      if (s[i] == '0')
        sum0 += a[i];
      else
        sum1 += a[i];
    }
    int ans = sum0;
    if (sum0 >= c)
    {
      ans = max(sum0, sum0 - c + sum1);
    }
    cout << ans << endl;
  }
  return 0;
}
