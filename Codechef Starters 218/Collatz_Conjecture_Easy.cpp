#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int tcc;
  cin >> tcc;
  while (tcc--)
  {
    ll n;
    cin >> n;

    set<ll> vis;
    queue<ll> q;

    q.push(n);
    vis.insert(n);

    bool ok = false;

    while (!q.empty())
    {
      ll x = q.front();
      q.pop();

      if (x == 1)
      {
        ok = true;
        break;
      }

      ll y = (x ^ 3) + 1;
      if (!vis.count(y))
      {
        vis.insert(y);
        q.push(y);
      }

      if (x % 2 == 0)
      {
        ll z = x / 2;
        if (!vis.count(z))
        {
          vis.insert(z);
          q.push(z);
        }
      }
    }

    if (ok)
      cout << "Yes\n";
    else
      cout << "No\n";
  }

  return 0;
}
