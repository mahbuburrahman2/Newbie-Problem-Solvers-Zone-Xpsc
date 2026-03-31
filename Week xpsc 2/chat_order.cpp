#include <bits/stdc++.h>
using namespace std;

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n;
  cin >> n;

  vector<string> v(n), ans;
  set<string> fnd;

  for (int i = 0; i < n; i++)
    cin >> v[i];

  for (int i = n - 1; i >= 0; i--)
  {
    if (!fnd.count(v[i]))
      ans.push_back(v[i]);
    fnd.insert(v[i]);
  }
  for (int i = 0; i < ans.size(); i++)
  {
    cout << ans[i] << '\n';
  }
  return 0;
}