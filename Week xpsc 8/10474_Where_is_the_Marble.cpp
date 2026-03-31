#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n, q;
  int c = 1;

  while (true)
  {
    cin >> n >> q;
    if (n == 0 && q == 0)
      break;

    vector<int> a(n);
    for (int &x : a)
      cin >> x;

    sort(a.begin(), a.end());

    cout << "CASE# " << c << ":\n";
    c++;
    while (q--)
    {
      int x;
      cin >> x;

      auto it = lower_bound(a.begin(), a.end(), x);
      int pos = it - a.begin();

      if (pos < n && a[pos] == x)
        cout << x << " found at " << pos + 1 << "\n";
      else
        cout << x << " not found\n";
    }
  }
  return 0;
}
