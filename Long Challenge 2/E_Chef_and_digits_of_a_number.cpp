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
    string s;
    cin >> s;

    int c0 = 0, c1 = 0;
    for (char c : s)
    {
      if (c == '0')
        c0++;
      else
        c1++;
    }

    if (c0 == 1 || c1 == 1)
      cout << "Yes\n";
    else
      cout << "No\n";
  }
  return 0;
}
