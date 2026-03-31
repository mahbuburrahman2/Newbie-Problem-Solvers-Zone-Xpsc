#include <bits/stdc++.h>
using namespace std;

const int maxN = 1e8;
int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  // O(n)
  // int n;
  // cin >> n;
  // for (int i = 1; i <= n; i++)
  // {
  //   if (n % i == 0)
  //   {
  //     cout << i << " ";
  //   }
  // }

  // O(sqrt(n))
  double it = sqrt(maxN);
  cout << it << "\n";
  int n;
  cin >> n;
  vector<int> divisors;
  for (int i = 1; i * i <= n; i++)
  {
    if (n % i == 0)
    {
      divisors.push_back(i);
      if (n / i != 0)
      {
        divisors.push_back(n / i);
      }
    }
  }
  sort(divisors.begin(), divisors.end());
  for (auto value : divisors)
  {
    cout << value << " ";
  }
  cout << "\n";
  return 0;
}
