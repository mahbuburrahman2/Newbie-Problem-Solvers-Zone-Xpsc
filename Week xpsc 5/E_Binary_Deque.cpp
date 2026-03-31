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
    int n, s;
    cin >> n >> s;
    vector<int> a(n);
    for (int &x : a)
      cin >> x;
    int total = count(a.begin(), a.end(), 1);
    if (total < s)
    {
      cout << -1 << "\n";
      continue;
    }
    if (total == s)
    {
      cout << 0 << "\n";
      continue;
    }

    int left = 0, curr = 0, ans = 0;
    for (int right = 0; right < n; right++)
    {
      curr += a[right];
      while (curr > s)
        curr -= a[left++];
      if (curr == s)
        ans = max(ans, right - left + 1);
    }
    cout << n - ans << "\n";
  }
}
