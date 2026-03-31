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
    int n, a, b;
    cin >> n >> a >> b;
    int total = 360;
    total += 2 * n;
    total -= (a + b);
    cout << total << "\n";
  }
  return 0;
}
