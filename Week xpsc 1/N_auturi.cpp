#include <bits/stdc++.h>
using namespace std;
int main()
{
  string s, ans = "";
  cin >> s;
  for (int i = 0; i < s.size(); i++)
    if (i == 0 || s[i - 1] == '-')
      ans += s[i];
  cout << ans << endl;
}
