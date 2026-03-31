#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n;
  cin >> n;
  deque<ll> b;
  for (int i = 0; i < n; i++)
  {
    ll x;
    cin >> x;
    if (i % 2 == 0)
      b.push_front(x);
    else
      b.push_back(x);
  }
  if (n % 2 == 0)
    reverse(b.begin(), b.end());
  for (auto x : b)
    cout << x << " ";
  cout << endl;

  return 0;
}
