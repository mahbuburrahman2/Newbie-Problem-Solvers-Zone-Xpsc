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
    int n, c;
    cin >> n >> c;

    int n1 = 0, s1 = 0;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
      cin >> a[i];

    string S;
    cin >> S;
    for (int i = 0; i < n; i++)
    {
      if (S[i] == '0')
        n1 += a[i];
      else
        s1 += a[i];
    }

    int ans = n1;
    if (n1 >= c)
    {
      int t = n1 - c + s1;
      if (t > ans)
        ans = t;
    }
    cout << ans << "\n";
  }
  return 0;
}
