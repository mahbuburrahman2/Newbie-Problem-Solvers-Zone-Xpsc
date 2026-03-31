#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int tcc;
  cin >> tcc;
  while (tcc--)
  {
    int n;
    cin >> n;

    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
      int x;
      cin >> x;
      if (x == 2)
        cnt++;
    }

    if (cnt % 8 == 0)
      cout << "YES\n";
    else
      cout << "NO\n";
  }
  return 0;
}
