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
    int n, x;
    cin >> n >> x;
    if (x > n)
    {
      cout << 0 << "\n";
      continue;
    }
    int all = (n * (n + 1)) / 2 - ((x - 1) * x) / 2;
    int cnt = n - x + 1;
    int cst = cnt * x;
    int pro = all - cst;
    cout << pro << "\n";
  }
  return 0;
}
