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
    ll n, k;
    cin >> n >> k;

    if (n == 1)
    {
      if (k == 1)
        cout << "Yes\n";
      else
        cout << "No\n";
    }
    else if (n % 2 == 0)
    {
      cout << "Yes\n";
    }
    else
    {
      if (k == 1)
        cout << "Yes\n";
      else
        cout << "No\n";
    }
  }
  return 0;
}
