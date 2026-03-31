#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
using ll = long long;
template <class T>
using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);
  int n, k;
  cin >> n >> k;
  vector<ll> a(n);
  for (auto &x : a)
    cin >> x;
  pbds<pair<ll, int>> L, R;
  ll sL = 0, sR = 0;
  int w = (k + 1) / 2;
  for (int i = 0; i < n; i++)
  {
    pair<ll, int> p = {a[i], i};
    if (L.empty() || p <= *prev(L.end()))
      L.insert(p), sL += p.first;
    else
      R.insert(p), sR += p.first;
    while ((int)L.size() > w)
    {
      auto it = prev(L.end());
      sL -= it->first;
      sR += it->first;
      R.insert(*it);
      L.erase(it);
    }
    while ((int)L.size() < w && !R.empty())
    {
      auto it = R.begin();
      sR -= it->first;
      sL += it->first;
      L.insert(*it);
      R.erase(it);
    }
    if (i >= k)
    {
      pair<ll, int> q = {a[i - k], i - k};
      if (L.find(q) != L.end())
        sL -= q.first, L.erase(q);
      else
        sR -= q.first, R.erase(q);
      while ((int)L.size() > w)
      {
        auto it = prev(L.end());
        sL -= it->first;
        sR += it->first;
        R.insert(*it);
        L.erase(it);
      }
      while ((int)L.size() < w && !R.empty())
      {
        auto it = R.begin();
        sR -= it->first;
        sL += it->first;
        L.insert(*it);
        R.erase(it);
      }
    }
    if (i >= k - 1)
    {
      ll m = prev(L.end())->first;
      cout << m * L.size() - sL + sR - m * R.size() << ' ';
    }
  }
}
