#include <bits/stdc++.h>
using namespace std;
int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int tc;
  cin >> tc;
  while (tc--)
  {
    int n, m, k;
    cin >> n >> m >> k;
    int diff = abs(n - m);
    if (k >= diff)
      cout << 0 << "\n";
    else
      cout << diff - k << "\n";
  }
  return 0;
}
