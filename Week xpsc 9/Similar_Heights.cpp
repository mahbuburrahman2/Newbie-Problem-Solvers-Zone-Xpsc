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
    int n;
    cin >> n;

    vector<int> a(n);
    for (int i = 0; i < n; i++)
      cin >> a[i];

    sort(a.begin(), a.end());

    int s = 0;
    bool ok = false;
    int ans = -1;

    for (int i = 0; i < n;)
    {
      int j = i;
      while (j < n && a[j] == a[i])
        j++;

      int cnt = j - i;
      if (cnt == 1)
      {
        s++;
        ans = a[i];
      }
      if (cnt >= 3)
        ok = true;

      i = j;
    }

    int mx = a[n - 1];

    if (s > 1)
    {
      cout << (s + 1) / 2 << "\n";
    }
    else if (s == 0)
    {
      cout << 0 << "\n";
    }
    else if (ans != mx || (ans == mx && ok))
    {
      cout << 1 << "\n";
    }
    else
    {
      cout << 2 << "\n";
    }
  }
  return 0;
}
