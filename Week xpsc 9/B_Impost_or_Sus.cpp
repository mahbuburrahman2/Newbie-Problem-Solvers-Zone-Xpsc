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
    string r;
    cin >> r;

    int n = r.length();
    vector<int> s_pos;
    for (int i = 0; i < n; i++)
    {
      if (r[i] == 's')
      {
        s_pos.push_back(i);
      }
    }

    int m = s_pos.size();
    if (m == 0)
    {
      cout << "2\n";
      continue;
    }

    if (m == 1)
    {
      cout << "1\n";
      continue;
    }

    int ans = 0;
    int l = 0;

    for (int i = 0; i < n; i++)
    {
      if (r[i] == 's')
        continue;

      while (l + 1 < m && s_pos[l + 1] < i)
      {
        l++;
      }

      int left_dist = i - s_pos[l];
      int right_dist = (l + 1 < m) ? s_pos[l + 1] - i : left_dist + 1;

      if (left_dist != right_dist)
      {
        ans++;
      }
    }

    cout << ans << "\n";
  }

  return 0;
}