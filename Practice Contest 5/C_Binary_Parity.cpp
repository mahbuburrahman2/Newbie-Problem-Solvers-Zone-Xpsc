#include <bits/stdc++.h>
using namespace std;
using ll = long long;
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

    int ans = 0;
    int x = n;

    while (x)
    {
      x &= (x - 1);
      ans++;
    }

    if (ans % 2 == 0)
      cout << "EVEN\n";
    else
      cout << "ODD\n";
  }
  return 0;
}