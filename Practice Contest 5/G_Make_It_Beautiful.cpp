#include <bits/stdc++.h>
using namespace std;

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t;
  cin >> t;

  while (t--)
  {
    int n;
    long long k;
    cin >> n >> k;

    vector<long long> a(n);
    for (auto &x : a)
      cin >> x;

    long long beauty = 0;
    vector<pair<long long, long long>> ops;

    for (long long x : a)
    {
      long long b = __builtin_popcountll(x);
      beauty += b;

      // try next full-ones number: (2^t - 1)
      for (int t = b + 1; t <= 60; t++)
      {
        long long target = (1LL << t) - 1;
        if (target < x)
          continue;
        long long cost = target - x;
        long long gain = t - b;
        ops.push_back({cost, gain});
        break;
      }
    }

    sort(ops.begin(), ops.end());

    for (auto &p : ops)
    {
      long long cost = p.first;
      long long gain = p.second;
      if (cost > k)
        break;
      k -= cost;
      beauty += gain;
    }

    cout << beauty << "\n";
  }
}
