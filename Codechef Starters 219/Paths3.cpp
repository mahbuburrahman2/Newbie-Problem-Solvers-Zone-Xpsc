#include <bits/stdc++.h>
using namespace std;
using ll = long long;

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

    if (n == 2)
    {
      cout << -1 << '\n';
      continue;
    }

    int a[50][50] = {0};

    a[0][0] = a[0][1] = a[0][2] = 1;
    a[1][1] = a[1][2] = 1;
    a[2][1] = a[2][2] = 1;

    for (int i = 3; i < n; i++)
      a[i][2] = 1;

    for (int j = 2; j < n; j++)
      a[n - 1][j] = 1;

    for (int i = 0; i < n; i++)
    {
      for (int j = 0; j < n; j++)
        cout << a[i][j] << " ";
      cout << '\n';
    }
  }
  return 0;
}
