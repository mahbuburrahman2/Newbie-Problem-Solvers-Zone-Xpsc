#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
  ios::sync_with_stdio(false);
  cin.tie(NULL);

  int n;
  cin >> n;
  vector<ll> a(n);
  for (int i = 0; i < n; i++)
  {
    cin >> a[i];
  }
  sort(a.begin(), a.end());

  int q;
  cin >> q;
  while (q--)
  {
    ll l, r;
    cin >> l >> r;

    auto itL = lower_bound(a.begin(), a.end(), l);

    auto itR = upper_bound(a.begin(), a.end(), r);
    cout << (itR - itL) << " ";
  }
  cout << "\n";
  return 0;
}
