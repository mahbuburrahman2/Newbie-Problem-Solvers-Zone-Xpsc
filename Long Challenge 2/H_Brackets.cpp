#include <bits/stdc++.h>
using namespace std;
int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int tcccc;
  cin >> tcccc;
  while (tcccc--)
  {
    string a;
    cin >> a;

    int bal = 0, mx = 0;
    for (char c : a)
    {
      if (c == '(')
        bal++;
      else
        bal--;
      mx = max(mx, bal);
    }

    for (int i = 0; i < mx; i++)
      cout << '(';
    for (int i = 0; i < mx; i++)
      cout << ')';
    cout << "\n";
  }
  return 0;
}
