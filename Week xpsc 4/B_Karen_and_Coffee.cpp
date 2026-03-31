#include <bits/stdc++.h>
using namespace std;

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int mx = 200005;
  int n, k, q;
  cin >> n >> k >> q;

  vector<int> diff(mx + 2, 0);

  for (int i = 0; i < n; i++)
  {
    int l, r;
    cin >> l >> r;
    diff[l] += 1;
    diff[r + 1] -= 1;
  }

  for (int i = 1; i <= mx; i++)
    diff[i] += diff[i - 1];

  vector<int> pref(mx + 2, 0);
  for (int i = 1; i <= mx; i++)
    pref[i] = pref[i - 1] + (diff[i] >= k);

  while (q--)
  {
    int a, b;
    cin >> a >> b;
    cout << pref[b] - pref[a - 1] << "\n";
  }

  return 0;
}
