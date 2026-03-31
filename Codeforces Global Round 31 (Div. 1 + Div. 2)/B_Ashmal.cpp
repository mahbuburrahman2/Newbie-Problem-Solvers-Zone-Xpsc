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

    vector<string> a(n);
    for (int i = 0; i < n; i++)
      cin >> a[i];

    string ans = "";

    for (int i = 0; i < n; i++)
    {
      string x = a[i] + ans;
      string y = ans + a[i];

      if (x < y)
        ans = x;
      else
        ans = y;
    }
    cout << ans << "\n";
  }

  return 0;
}
