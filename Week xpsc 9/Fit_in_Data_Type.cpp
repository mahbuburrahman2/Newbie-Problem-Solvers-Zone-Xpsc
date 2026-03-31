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
    int n, x;
    cin >> n >> x;

    int c = n + 1;
    cout << x % c << '\n';
  }
  return 0;
}
