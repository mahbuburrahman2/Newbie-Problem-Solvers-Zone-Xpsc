#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
  int tc;
  cin >> tc;
  while (tc--)
  {
    int n = 0, k = 0;
    cin >> n >> k;
    int max = 0;
    int ans = k;
    while (k > ans / 2)
    {
      if (n % k > max)
        max = n % k;
      k--;
    }

    cout << max << endl;
  }
  return 0;
}