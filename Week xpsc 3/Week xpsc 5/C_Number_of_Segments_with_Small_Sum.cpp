#include <bits/stdc++.h>
using namespace std;
int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n;
  long long k;
  cin >> n >> k;

  vector<long long> a(n);
  for (int i = 0; i < n; i++)
    cin >> a[i];

  int l = 0;
  long long sum = 0, ans = 0;

  for (int r = 0; r < n; r++)
  {
    sum += a[r];
    while (sum > k && l <= r)
    {
      sum -= a[l];
      l++;
    }
    ans += (r - l + 1);
  }
  cout << ans << '\n';
  return 0;
}
