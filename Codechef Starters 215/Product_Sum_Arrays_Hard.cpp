#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using pll = pair<ll, ll>;

struct pair_hash
{
  size_t operator()(const pll &p) const
  {
    return p.first * 1000000007LL + p.second;
  }
};

unordered_map<pll, ll, pair_hash> memo;

ll dfs(ll rem, ll min_factor)
{
  if (memo.count({rem, min_factor}))
  {
    return memo[{rem, min_factor}];
  }

  ll count = 1;

  for (ll d = min_factor; d * d <= rem; ++d)
  {
    if (rem % d == 0)
    {
      count += dfs(rem / d, d);
    }
  }

  return memo[{rem, min_factor}] = count;
}

ll solve(ll n)
{
  if (n == 1)
    return 1;
  memo.clear();
  return dfs(n, 2);
}

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  int t;
  cin >> t;
  while (t--)
  {
    ll n;
    cin >> n;
    cout << solve(n) << "\n";
  }

  return 0;
}