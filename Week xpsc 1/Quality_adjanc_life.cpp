#include <bits/stdc++.h>
using namespace std;
int main()
{
  int n;
  cin >> n;
  double q, y, qualy = 0.0;
  for (int i = 0; i < n; i++)
  {
    cin >> q >> y;
    qualy += q * y;
  }
  cout << fixed << setprecision(3) << qualy << endl;
  return 0;
}
