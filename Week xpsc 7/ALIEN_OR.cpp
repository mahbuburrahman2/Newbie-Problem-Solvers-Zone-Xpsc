#include <bits/stdc++.h>
using namespace std;
void solve()
{
  int n, k;
  cin >> n >> k;

  map<string, bool> ache;
  for (int i = 0; i < n; i++)
  {
    string s;
    cin >> s;
    ache[s] = true;
  }
  string s(k, '0');
  for (int i = 0; i < k; i++)
  {
    s[i] = '1';
    if ((!ache[s]))
    {
      cout << "NO\n";
      return;
    }
    s[i] = '0';
  }
  cout << "YES\n";
}

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int t;
  cin >> t;
  while (t--)
  {
    solve();
  }
  return 0;
}
