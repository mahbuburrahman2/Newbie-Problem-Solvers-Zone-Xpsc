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
    vector<int> a(n);
    for (int i = 0; i < n; i++)
      cin >> a[i];

    set<int> s;
    int i = n - 1;
    while (i >= 0)
    {
      if (s.count(a[i]))
        break;
      s.insert(a[i]);
      i--;
    }
    cout << i + 1 << "\n";
  }
}
