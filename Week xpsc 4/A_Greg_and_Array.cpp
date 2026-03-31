#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n, m, k;
  cin >> n >> m >> k;

  vector<ll> a(n + 1);
  for (int i = 1; i <= n; i++)
    cin >> a[i];

  vector<ll> l(m + 1), r(m + 1), d(m + 1);
  for (int i = 1; i <= m; i++)
    cin >> l[i] >> r[i] >> d[i];

  // Step 1: Handle the operation ranges
  vector<ll> op(m + 2, 0);
  while (k--)
  {
    int x, y;
    cin >> x >> y;
    op[x] += 1;
    op[y + 1] -= 1;
  }

  // Prefix sum — how many times each operation is applied
  for (int i = 1; i <= m; i++)
    op[i] += op[i - 1];

  // Step 2: Handle array updates with a difference array
  vector<ll> diff(n + 2, 0);
  for (int i = 1; i <= m; i++)
  {
    diff[l[i]] += d[i] * op[i];
    diff[r[i] + 1] -= d[i] * op[i];
  }

  // Step 3: Apply all updates to original array
  for (int i = 1; i <= n; i++)
  {
    diff[i] += diff[i - 1];
    cout << a[i] + diff[i] << " ";
  }
  cout << '\n';
}
