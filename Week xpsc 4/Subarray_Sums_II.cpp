#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n;
  ll x;
  cin >> n >> x;

  vector<ll> a(n);
  for (auto &i : a)
    cin >> i;

  map<ll, int> freq;
  freq[0] = 1;
  ll sum = 0, ans = 0;

  for (ll v : a)
  {
    sum += v;
    ans += freq[sum - x];
    freq[sum]++;
  }

  cout << ans << "\n";
}
