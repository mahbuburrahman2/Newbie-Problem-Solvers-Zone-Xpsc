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
    int n;
    cin >> n;
    vector<long long> a(n);
    for (int i = 0; i < n; i++)
      cin >> a[i];

    long long L = a[0], R = a[n - 1];

    if (L == -1 && R == -1)
    {
      L = R = 0;
    }
    else if (L == -1)
    {
      L = R;
    }
    else if (R == -1)
    {
      R = L;
    }

    long long ans = llabs(R - L);
    a[0] = L;
    a[n - 1] = R;

    for (int i = 1; i + 1 < n; i++)
    {
      if (a[i] == -1)
        a[i] = 0;
    }

    cout << ans << "\n";
    for (auto &x : a)
      cout << x << " ";
    cout << "\n";
  }
  return 0;
}
