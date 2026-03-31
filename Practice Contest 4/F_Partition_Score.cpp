#include <bits/stdc++.h>
using namespace std;

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);

  int T;
  cin >> T;
  while (T--)
  {
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for (int &x : a)
      cin >> x;
    sort(a.begin(), a.end());

    int ans = 0;
    for (int i = k - 1; i < n - k; i++)
    {
      int score = a[0] + a[i] + a[i + 1] + a[n - 1];
      ans = max(ans, score);
    }
    cout << ans << '\n';
  }
}
