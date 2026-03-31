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
    string s;
    cin >> n >> s;
    vector<int> pos;
    for (int i = 0; i < n; i++)
    {
      if (s[i] == '1')
        pos.push_back(i);
    }

    int safe = 0;

    if (pos.empty())
    {
      for (char c : s)
        if (c == '0')
          safe++;
    }
    else
    {
      int first = pos[0];
      for (int i = 0; i < first; i++)
        if (s[i] == '0')
          safe++;
    }
    cout << safe << "\n";
  }
  return 0;
}
