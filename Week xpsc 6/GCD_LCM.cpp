#include <bits/stdc++.h>
using namespace std;

long long GCD(long long a, long long b)
{
  return __gcd(a, b);
}

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  long long l, r;
  cin >> l >> r;

  cout << "YES\n";

  for (long long i = l; i <= r; i += 2)
  {
    if (GCD(i, i + 1) == 1)
    {
      cout << i << " " << i + 1 << "\n";
    }
    else
    {
      cout << i << " " << i + 1 << "\n";
    }
  }

  return 0;
}
