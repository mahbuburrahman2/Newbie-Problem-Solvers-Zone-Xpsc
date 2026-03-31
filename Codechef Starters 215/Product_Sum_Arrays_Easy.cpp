#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int cnt;
void dfs(ll rem, ll last, ll sum, ll N)
{
  if (cnt >= 3)
    return;
  if (rem == 1)
  {
    if (sum <= N)
      cnt++;
    return;
  }

  for (ll x = last; x * x <= rem; x++)
  {
    if (rem % x == 0)
    {
      if (sum + x <= N)
        dfs(rem / x, x, sum + x, N);
    }
  }

  if (rem >= last && sum + rem <= N)
    dfs(1, rem, sum + rem, N);
}

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int tc;
  cin >> tc;
  while (tc--)
  {
    ll n;
    cin >> n;
    if (n == 1)
    {
      cout << 1 << "\n";
      continue;
    }
    cnt = 0;
    dfs(n, 2, 0, n);
    cout << min(cnt, 3) << "\n";
  }
  return 0;
}
