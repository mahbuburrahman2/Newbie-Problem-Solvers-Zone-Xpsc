#include <bits/stdc++.h>
using namespace std;
int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n, m;
  cin >> n >> m;
  vector<int> a(n + 1), b(n + 1);
  for (int i = 1; i <= n; i++)
  {
    cin >> a[i];
    b[a[i]] = i;
  }

  int ans = 1;
  for (int i = 1; i < n; i++)
  {
    if (b[i] > b[i + 1])
      ans++;
  }

  while (m--)
  {
    int l, r;
    cin >> l >> r;

    int x = a[l];
    int y = a[r];

    set<int> s;
    s.insert(x);
    s.insert(x - 1);
    s.insert(y);
    s.insert(y - 1);

    for (int v : s)
    {
      if (v >= 1 && v < n && b[v] > b[v + 1])
        ans--;
    }

    swap(a[l], a[r]);
    swap(b[x], b[y]);

    for (int v : s)
    {
      if (v >= 1 && v < n && b[v] > b[v + 1])
        ans++;
    }
    cout << ans << "\n";
  }
  return 0;
}
