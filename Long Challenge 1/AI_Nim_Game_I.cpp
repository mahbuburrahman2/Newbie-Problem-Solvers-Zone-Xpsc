#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int tc;
  cin >> tc;
  while (tc--)
  {
    int n;
    cin >> n;
    ll nim = 0;
    for (int i = 0; i < n; i++)
    {
      ll x;
      cin >> x;
      nim = nim ^ x;
    }
    if (nim == 0)
      cout << "second\n";
    else
      cout << "first\n";
  }
  return 0;
}
