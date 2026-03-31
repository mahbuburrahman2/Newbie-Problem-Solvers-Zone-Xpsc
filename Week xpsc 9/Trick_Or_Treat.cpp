#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int tc;
  cin >> tc;

  while (tc--)
  {
    ll n, m;
    cin >> n >> m;

    vector<ll> freq(m, 0);

    ll x;
    for (int i = 0; i < n; i++)
    {
      cin >> x;
      freq[x % m]++;
    }

    ll ans = 0;
    for (int i = 0; i < n; i++)
    {
      cin >> x;
      ll rem = x % m;
      ll need = (m - rem) % m;
      ans += freq[need];
    }

    cout << ans << "\n";
  }

  return 0;
}
