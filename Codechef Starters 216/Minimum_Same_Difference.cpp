#include <bits/stdc++.h>
using namespace std;

static const long long MOD = 998244353LL;

long long pw(long long a, long long b)
{
  long long r = 1 % MOD;
  a %= MOD;
  while (b)
  {
    if (b & 1)
      r = (r * a) % MOD;
    a = (a * a) % MOD;
    b >>= 1;
  }
  return r;
}

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t;
  cin >> t;

  while (t--)
  {
    int n, k;
    cin >> n >> k;

    long long su = 0;
    long long pe = 0;

    for (int d = 1; d <= n; d++)
    {

      if (d == 1)
      {
        pe = k % MOD;
      }
      else
      {
        long long v = 1LL * (k - d + 1);
        if (v <= 0)
          pe = 0;
        else
          pe = (pe * (v % MOD)) % MOD;
      }

      long long base = 1LL * (k - d + 1);
      long long pwv;

      if (base <= 0 && n - d > 0)
        pwv = 0;
      else
        pwv = pw(base, n - d);

      long long cur = (pe * pwv) % MOD;

      if (d < n)
        su = (su + cur) % MOD;

      if (d == n)
      {
        long long an = (su - (1LL * (n - 1) % MOD) * cur % MOD) % MOD;
        if (an < 0)
          an += MOD;
        cout << an << "\n";
      }
    }
  }

  return 0;
}
