#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
  int n;
  cin >> n;

  vector<ll> v(n);
  for (ll &x : v)
    cin >> x;

  int pos = -1;
  for (int i = 1; i < n; i++)
  {
    if (v[i] > v[0])
    {
      pos = i;
      break;
    }
  }

  if (pos == -1)
  {
    cout << -1 << '\n';
    return;
  }

  cout << pos << '\n';
  for (int i = 0; i < pos; i++)
    cout << v[i] << " ";
  cout << '\n';

  cout << n - pos << '\n';
  for (int i = pos; i < n; i++)
    cout << v[i] << " ";
  cout << '\n';
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
