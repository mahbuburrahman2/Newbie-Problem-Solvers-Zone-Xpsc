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
    int run = 0, mxa = 0;
    for (int i = 0; i < n; i++)
    {
      int x;
      cin >> x;
      if (x > 0)
        run++;
      else
        run = 0;
      mxa = max(mxa, run);
    }
    run = 0;
    int mxb = 0;
    for (int i = 0; i < n; i++)
    {
      int x;
      cin >> x;
      if (x > 0)
        run++;
      else
        run = 0;
      mxb = max(mxb, run);
    }
    if (mxa == mxb)
      cout << "Draw\n";
    else if (mxa > mxb)
      cout << "Om\n";
    else
      cout << "Addy\n";
  }

  return 0;
}
