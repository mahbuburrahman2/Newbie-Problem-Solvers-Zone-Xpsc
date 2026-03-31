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
  for (auto &x : a)
    cin >> x;
  sort(a.begin(), a.end());
  int cnt = 1;
  for (int i = 1; i < n; i++)
  {
    if (a[i] != a[i - 1])
      cnt++;
  }
  cout << cnt << "\n";
  return 0;
}
