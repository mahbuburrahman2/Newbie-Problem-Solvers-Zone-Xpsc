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
    string a[6];
    for (int i = 0; i < 6; i++)
      cin >> a[i];

    int cnt = 0, hat = 0;
    for (int i = 0; i < 6; i++)
    {
      if (a[i] == "W")
        cnt++;
      else
        cnt = 0;
      if (cnt == 3)
        hat = 1;
    }
    if (hat)
      cout << "YES\n";
    else
      cout << "NO\n";
  }
  return 0;
}
