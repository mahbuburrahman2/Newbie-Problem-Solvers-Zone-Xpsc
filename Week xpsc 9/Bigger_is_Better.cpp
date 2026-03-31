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

    if (count(s.begin(), s.end(), 'z') == n)
      cout << -1 << '\n';
    else
      cout << string(n, 'z') << '\n';
  }
  return 0;
}
