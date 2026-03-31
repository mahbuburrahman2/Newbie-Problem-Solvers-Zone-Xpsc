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
    string s;
    cin >> s;

    string ans = s;
    sort(ans.begin(), ans.end());

    if (s == ans)
    {
      cout << 0 << "\n";
      continue;
    }

    vector<int> idx;
    for (int i = 0; i < n; i++)
    {
      if (s[i] != ans[i])
        idx.push_back(i + 1);
    }

    cout << 1 << "\n";
    cout << idx.size() << " ";
    for (int x : idx)
      cout << x << " ";
    cout << "\n";
  }
  return 0;
}
