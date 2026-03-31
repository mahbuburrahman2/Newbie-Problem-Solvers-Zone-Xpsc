#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t;
  cin >> t;
  while (t--)
  {
    int n;
    cin >> n;
    vector<ll> a(n);
    for (auto &x : a)
      cin >> x;

    ll sum = 0;
    int op = 0, neg = 0;

    for (int i = 0; i < n; i++)
    {
      sum += abs(a[i]);
      if (a[i] < 0)
        neg = 1;
      else if (a[i] > 0 && neg)
        op++, neg = 0;
    }
    if (neg)
      op++;
    cout << sum << " " << op << "\n";
  }
}
