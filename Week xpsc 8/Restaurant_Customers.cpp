#include <bits/stdc++.h>
using namespace std;
int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n;
  cin >> n;
  vector<int> a(n), l(n);
  for (int i = 0; i < n; i++)
  {
    cin >> a[i] >> l[i];
  }

  sort(a.begin(), a.end());
  sort(l.begin(), l.end());

  int ans = 0;
  for (int i = 0; i < n; i++)
  {
    int dan = upper_bound(a.begin(), a.end(), a[i]) - a.begin();
    int bam = lower_bound(l.begin(), l.end(), a[i]) - l.begin();
    ans = max(ans, dan - bam);
  }
  cout << ans << "\n";
  return 0;
}
