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
    for (int &v : a)
      cin >> v;

    int x;
    cin >> x;

    sort(a.begin(), a.end());

    cout << ((x >= a[0] && x <= a[n - 1]) ? "YES\n" : "NO\n");
  }
  return 0;
}
