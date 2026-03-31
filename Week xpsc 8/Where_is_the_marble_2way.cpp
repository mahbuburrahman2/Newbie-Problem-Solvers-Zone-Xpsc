#include <bits/stdc++.h>
using namespace std;

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n, q;
  int c = 1;

  while (true)
  {
    cin >> n >> q;
    if (n == 0 && q == 0)
      break;

    vector<int> a(n);
    for (int i = 0; i < n; i++)
      cin >> a[i];

    sort(a.begin(), a.end());

    cout << "CASE# " << c << ":\n";
    c++;

    while (q--)
    {
      int key;
      cin >> key;

      int l = 0, r = n - 1, mid;
      int pos = -1;

      while (l <= r)
      {
        mid = (l + r) / 2;

        if (a[mid] == key)
        {
          pos = mid;
          r = mid - 1;
        }
        else if (key < a[mid])
        {
          r = mid - 1;
        }
        else
        {
          l = mid + 1;
        }
      }

      if (pos != -1)
        cout << key << " found at " << pos + 1 << "\n";
      else
        cout << key << " not found\n";
    }
  }

  return 0;
}
