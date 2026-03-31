#include <bits/stdc++.h>
using namespace std;

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n;
  cin >> n;
  map<string, int> d;
  for (int i = 0; i < n; i++)
  {
    string nm;
    cin >> nm;
    if (d[nm] == 0)
      cout << "OK\n";
    else
      cout << nm << d[nm] << "\n";
    d[nm]++;
  }

  return 0;
}
