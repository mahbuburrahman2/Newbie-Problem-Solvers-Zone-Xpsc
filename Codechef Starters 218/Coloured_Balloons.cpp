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

    vector<int> a(n);
    for (int i = 0; i < n; i++)
      cin >> a[i];

    ll ans = 0;
    for (int i = 0; i < n; i++)
      ans += 1LL * a[i] * (i + 1);

    cout << ans << "\n";
  }
  return 0;
}
