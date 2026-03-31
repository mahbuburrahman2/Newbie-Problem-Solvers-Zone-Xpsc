#include <bits/stdc++.h>
using namespace std;

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int T;
  if (!(cin >> T))
    return 0;
  while (T--)
  {
    long long X, Y, K;
    cin >> X >> Y >> K;
    if (K == 0)
      cout << (X + Y) << '\n';
    else
      cout << 2LL * min(X, Y) << '\n';
  }
  return 0;
}
