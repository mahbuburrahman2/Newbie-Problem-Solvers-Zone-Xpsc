#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int tc;
  cin >> tc;

  cout << fixed << setprecision(10);

  while (tc--)
  {
    double a;
    cin >> a;

    double m = 10000.0;
    double g = 0.0;

    if (a > 0.5)
      g = m * (1 - a) * (2 * a - 1);
    else if (a < 0.5)
      g = m * a * (1 - 2 * a);

    cout << m + g << '\n';
  }
  return 0;
}
