#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(NULL);

  int tc;
  cin >> tc;
  while (tc--)
  {
    int n;
    cin >> n;

    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
      cin >> a[i];
    }
    int mx = *max_element(a.begin(), a.end());
    int ans = 0;

    for (int i = 0; i < n; i++)
    {
      if (a[i] < mx)
      {
        ans = max(ans, a[i]);
      }
    }
    cout << ans << '\n';
  }
  return 0;
}
