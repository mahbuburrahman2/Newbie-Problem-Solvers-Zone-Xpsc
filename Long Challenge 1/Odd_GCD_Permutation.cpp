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
    int n;
    cin >> n;

    if (n % 2 == 1)
    {
      cout << -1 << "\n";
      continue;
    }

    for (int i = n; i >= 1; i--)
      cout << i << " ";
    cout << "\n";
  }
  return 0;
}