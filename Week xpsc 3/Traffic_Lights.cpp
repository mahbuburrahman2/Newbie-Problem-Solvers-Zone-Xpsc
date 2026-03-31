#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  ll x;
  int n;
  cin >> x >> n;

  vector<int> p(n);
  for (int i = 0; i < n; i++)
    cin >> p[i];

  set<ll> a;
  multiset<ll> b;

  a.insert(0);
  a.insert(x);
  b.insert(x);

  for (int i = 0; i < n; i++)
  {
    ll pos = p[i];
    auto right = a.upper_bound(pos);
    auto left = prev(right);

    ll l = *left;
    ll r = *right;

    b.erase(b.find(r - l));
    b.insert(pos - l);
    b.insert(r - pos);
    a.insert(pos);
    cout << *b.rbegin() << " ";
  }
}
