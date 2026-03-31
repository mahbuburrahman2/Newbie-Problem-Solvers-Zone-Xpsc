#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n;
  cin >> n;

  vector<ll> a(n);
  for (int i = 0; i < n; i++)
    cin >> a[i];

  sort(a.begin(), a.end());

  ll mid = a[n / 2];

  ll cost = 0;
  int l = 0, r = n - 1;
  while (l < r)
  {
    cost += a[r] - a[l];
    l++;
    r--;
  }
  cout << cost << "\n";
  return 0;
}
