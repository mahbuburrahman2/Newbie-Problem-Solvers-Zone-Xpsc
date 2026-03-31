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

    int ans = (n / 4) * 400;
    int ace = (n % 4);

    if (ace == 1 && n >= 5)
    {
      ans -= 400;
      ans += 500;
    }
    else if (ace == 2)
    {
      ans += 200;
    }
    else if (ace == 3)
    {
      ans += 300;
    }
    else if (ace == 1)
    {
      ans += 200;
    }

    cout << ans << '\n';
  }
}
