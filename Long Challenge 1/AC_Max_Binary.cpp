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
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;

    if (k > 0 && s[0] == '0')
    {
      s[0] = '1';
      k--;
    }

    while (k > 0)
    {
      s += '0';
      k--;
    }
    cout << s << "\n";
  }
  return 0;
}