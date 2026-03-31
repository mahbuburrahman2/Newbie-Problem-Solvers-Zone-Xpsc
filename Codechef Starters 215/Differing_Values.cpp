#include <bits/stdc++.h>
using namespace std;
int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int tc;
  cin >> tc;
  while (tc--)
  {
    int n, k;
    cin >> n >> k;
    string S;
    cin >> S;

    int c0 = 0, c1 = 0;
    for (char c : S)
      if (c == '0')
        c0++;
      else
        c1++;
    int mx;
    if (c0 > c1)
      mx = c0;
    else
      mx = c1;

    int big = n % k;
    int sml = k - big;

    int bs = n / k;
    if (n % k != 0)
      bs = bs + 1;

    int ss = n / k;
    int lim = 0;
    lim += big * ((bs + 1) / 2);
    lim += sml * ((ss + 1) / 2);

    if (mx <= lim)
      cout << "Yes\n";
    else
      cout << "No\n";
  }
  return 0;
}
