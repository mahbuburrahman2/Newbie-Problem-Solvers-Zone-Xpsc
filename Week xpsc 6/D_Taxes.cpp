#include <bits/stdc++.h>
using namespace std;
using ll = long long;

bool isPrime(int n)
{
  if (n == 1)
  {
    return false;
  }
  for (int i = 2; i * i <= n; i++)
  {
    if (n % i == 0)
    {
      return false;
    }
  }
  return true;
}

// bool isPrime(int n)
// {
//   if (n < 2)
//     return false;
//   if (n % 2 == 0)
//     return n == 2;
//   for (ll i = 3; i * i <= n; i += 2)
//     if (n % i == 0)
//       return false;
//   return true;
// }

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n;
  cin >> n;

  if (isPrime(n))
  {
    cout << 1 << "\n";
    return 0;
  }
  if (n % 2 == 0)
  {
    cout << 2 << "\n";
    return 0;
  }

  if (isPrime(n - 2))
    cout << 2 << "\n";
  else
    cout << 3 << "\n";
  return 0;
}
