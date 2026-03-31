#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int tc;
  cin >> tc;
  while (tc--)
  {
    int n;
    string s;
    cin >> n >> s;
    int ans = 1;
    for (int i = 1; i < n; i++)
      ans += (s[i - 1] == '1' && s[i] == '0');
    cout << ans << '\n';
  }
  return 0;
}
