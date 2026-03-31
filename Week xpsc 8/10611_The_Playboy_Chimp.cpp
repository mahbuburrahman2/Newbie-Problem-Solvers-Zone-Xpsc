#include <bits/stdc++.h>
using namespace std;

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n;
  cin >> n;

  vector<int> a(n);
  for (int i = 0; i < n; i++)
    cin >> a[i];

  int q;
  cin >> q;

  while (q--)
  {
    int h;
    cin >> h;

    auto it1 = lower_bound(a.begin(), a.end(), h);

    auto it2 = upper_bound(a.begin(), a.end(), h);

    if (it1 == a.begin())
    {
      if (*it1 < h)
        cout << *it1 << " ";
      else
        cout << "X ";
    }
    else
    {
      it1--;
      if (*it1 < h)
        cout << *it1 << " ";
      else
        cout << "X ";
    }

    if (it2 == a.end())
      cout << "X\n";
    else
      cout << *it2 << "\n";
  }
  return 0;
}
