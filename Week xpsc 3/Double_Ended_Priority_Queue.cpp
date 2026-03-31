#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n, q;
  cin >> n >> q;
  multiset<ll> s;
  for (int i = 0; i < n; i++)
  {
    ll x;
    cin >> x;
    s.insert(x);
  }
  while (q--)
  {
    int type;
    cin >> type;

    switch (type)
    {
    case 0:
    {
      ll x;
      cin >> x;
      s.insert(x);
      break;
    }
    case 1:
    {
      cout << *s.begin() << "\n";
      s.erase(s.begin());
      break;
    }
    case 2:
    {
      auto it = s.end();
      it--;
      cout << *it << "\n";
      s.erase(it);
      break;
    }
    }
  }
  return 0;
}
