#include <bits/stdc++.h>
using namespace std;
int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  string s;
  cin >> s;
  string ans = "";
  for (int i = 0; i < s.size(); i++)
  {
    char c = s[i];
    if (c == '<')
    {
      if (!ans.empty())
        ans.pop_back();
    }
    else
      ans.push_back(c);
  }
  cout << ans << endl;
  return 0;
}
