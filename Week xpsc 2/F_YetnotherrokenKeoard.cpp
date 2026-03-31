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
    string s;
    cin >> s;
    vector<pair<int, char>> low, up;
    int l = 0, u = 0;

    for (int i = s.size() - 1; i >= 0; i--)
    {
      char c = s[i];
      if (c == 'b')
        l++;
      else if (c == 'B')
        u++;
      else if (c >= 'a' && c <= 'z' && l)
        l--;
      else if (c >= 'A' && c <= 'Z' && u)
        u--;
      else if (c >= 'a' && c <= 'z')
        low.push_back({i, c});
      else
        up.push_back({i, c});
    }

    for (auto &p : up)
      low.push_back(p);

    sort(low.begin(), low.end());

    for (auto &[i, c] : low)
      cout << c;
    cout << '\n';
  }
}
