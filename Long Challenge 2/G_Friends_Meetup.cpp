#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int Tcc;
  cin >> Tcc;
  while (Tcc--)
  {
    ll X1, X2;
    cin >> X1 >> X2;

    if (X1 >= X2)
    {
      cout << "YES\n";
    }
    else
    {
      cout << "NO\n";
    }
  }
  return 0;
}
