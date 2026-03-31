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
    int n, m;
    cin >> n >> m;

    string s;
    cin >> s;

    vector<int> idx(m);
    for (int i = 0; i < m; i++)
      cin >> idx[i];
    string c;
    cin >> c;
    sort(idx.begin(), idx.end());
    idx.erase(unique(idx.begin(), idx.end()), idx.end());
    sort(c.begin(), c.end());
    int j = 0;
    for (int pos : idx)
    {
      s[pos - 1] = c[j++];
    }
    cout << s << "\n";
  }
  return 0;
}
