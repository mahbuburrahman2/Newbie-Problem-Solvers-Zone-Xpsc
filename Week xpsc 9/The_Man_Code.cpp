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

    int a = (n + 1) / 2;
    int b = (n + 2) / 3;

    cout << a << " " << b << endl;
  }

  return 0;
}
