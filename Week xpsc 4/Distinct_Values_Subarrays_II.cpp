#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n, k;
  cin >> n >> k;
  vector<int> a(n);
  for (int &x : a)
    cin >> x;

  map<int, int> cnt;
  ll total = 0;
  int l = 0;
  for (int r = 0; r < n; r++)
  {
    cnt[a[r]]++;

    while ((int)cnt.size() > k)
    {
      cnt[a[l]]--;
      if (cnt[a[l]] == 0)
        cnt.erase(a[l]);
      l++;
    }
    total += (r - l + 1);
  }
  cout << total << '\n';
  return 0;
}
