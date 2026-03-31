#include <bits/stdc++.h>
using namespace std;

bool prime(int n)
{
  if (n < 2)
    return false;
  for (int i = 2; i * i <= n; i++)
    if (n % i == 0)
      return false;
  return true;
}

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int tc, n;
  cin >> tc;
  while (tc--)
  {
    cin >> n;
    if (prime(n))
      cout << "yes\n";
    else
      cout << "no\n";
  }
  return 0;
}
