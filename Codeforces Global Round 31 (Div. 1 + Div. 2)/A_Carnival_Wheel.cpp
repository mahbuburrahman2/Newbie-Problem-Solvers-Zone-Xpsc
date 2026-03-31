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
    int l, a, b;
    cin >> l >> a >> b;
    int g = __gcd(l, b);

    int ans = a, cur = a;

    while (true)
    {
      cur = (cur + b) % l;

      if (cur == a)
        break;

      if (cur > ans)
        ans = cur;
    }
    cout << ans << "\n";
  }
  return 0;
}
