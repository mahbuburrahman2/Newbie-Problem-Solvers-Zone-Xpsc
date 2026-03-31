#include <bits/stdc++.h>
using namespace std;

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n;
  cin >> n;

  vector<int> a(n), pref(n);
  for (int i = 0; i < n; i++)
  {
    cin >> a[i];
    if (i == 0)
      pref[i] = a[i];
    else
      pref[i] = pref[i - 1] + a[i];
  }

  int m;
  cin >> m;

  while (m--)
  {
    int q;
    cin >> q;

    auto it = lower_bound(pref.begin(), pref.end(), q);
    int pos = it - pref.begin();

    cout << pos + 1 << "\n";
  }

  return 0;
}