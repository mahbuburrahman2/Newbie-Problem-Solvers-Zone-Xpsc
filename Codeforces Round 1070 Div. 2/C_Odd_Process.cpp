#include <bits/stdc++.h>
using namespace std;
using ll = long long;
void solve()
{
  int n;
  cin >> n;
  vector<int> a(n);
  for (int &x : a)
    cin >> x;

  vector<ll> e;
  int odd_cnt = 0, mx_odd = 0;
  for (int x : a)
  {
    if (x % 2 == 0)
      e.push_back(x);
    else
    {
      mx_odd = max(mx_odd, x);
      odd_cnt++;
    }
  }

  sort(e.rbegin(), e.rend());

  vector<ll> pre_eve(e.size() + 1, 0);
  for (int i = 0; i < (int)e.size(); i++)
    pre_eve[i + 1] = pre_eve[i] + e[i];

  int m = e.size();
  for (int k = 1; k <= n; k++)
  {
    int take_eve = min(m, k - 1);
    if ((k - take_eve) % 2 == 0)
      take_eve--;
    if (take_eve < 0 || (k - take_eve) > odd_cnt)
      cout << 0 << " ";
    else
      cout << pre_eve[take_eve] + mx_odd << " ";
  }
  cout << "\n";
}

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int t;
  cin >> t;
  while (t--)
    solve();
  return 0;
}
