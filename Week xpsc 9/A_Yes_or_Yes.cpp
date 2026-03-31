#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int tcc;
  cin >> tcc;
  while (tcc--)
  {
    string s;
    cin >> s;

    int ans = 0;
    for (char c : s)
    {
      if (c == 'Y')
        ans++;
    }

    if (ans <= 1)
      cout << "YES\n";
    else
      cout << "NO\n";
  }
  return 0;
}
