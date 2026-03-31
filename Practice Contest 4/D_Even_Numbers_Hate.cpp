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
    vector<int> v(n);
    int odd = 0;
    int even = 0;

    for (int i = 0; i < n; i++)
    {
      cin >> v[i];
      if (v[i] % 2 == 0)
        even++;
      else
        odd++;
    }
    if (odd == 0)
      cout << 0 << "\n";
    else
    {
      int ans = 1;
      odd--;
      ans += even;
      ans += odd / 2;
      cout << ans << "\n";
    }
  }

  return 0;
}
