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
    int a, b;
    cin >> a >> b;

    if (100 * b > 225 * a)
      cout << "Small\n";
    else if (100 * b < 225 * a)
      cout << "Large\n";
    else
      cout << "Equal\n";
  }
  return 0;
}
