#include <bits/stdc++.h>
using namespace std;

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int T;
  cin >> T;
  while (T--)
  {

    int N;
    cin >> N;

    long long mn = LLONG_MAX, mx = LLONG_MIN, x;
    for (int i = 0; i < N; i++)
    {
      cin >> x;
      mn = min(mn, x);
      mx = max(mx, x);
    }

    long long avg = (mn + mx) / 2;

    long long ans = max(mx - avg, avg - mn);
    cout << ans << "\n";
  }
  return 0;
}
