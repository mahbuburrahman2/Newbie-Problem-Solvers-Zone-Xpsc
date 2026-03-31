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
    int n;
    cin >> n;
    vector<int> a(n), b(n);
    for (int i = 0; i < n; i++)
      cin >> a[i];
    for (int i = 0; i < n; i++)
      cin >> b[i];

    int A = 0, M = 0;
    for (int i = 0; i < n; i++)
    {
      if (a[i] != b[i])
      {
        if ((i + 1) & 1)
          A++;
        else
          M++;
      }
    }

    if (A > M)
      cout << "Ajisai\n";
    else if (M > A)
      cout << "Mai\n";
    else
      cout << "Tie\n";
  }
  return 0;
}
