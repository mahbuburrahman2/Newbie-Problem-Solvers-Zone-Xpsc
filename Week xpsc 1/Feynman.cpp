#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
  int n;
  cin >> n;
  while (n != 0)
  {
    ll all = (n * (n + 1) * (2 * n + 1) / 6);
    cout << all << endl;
    cin >> n;
  }
  return 0;
}
