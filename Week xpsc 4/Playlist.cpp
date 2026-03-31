#include <bits/stdc++.h>
using namespace std;
int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n;
  cin >> n;
  vector<int> k(n);
  for (int i = 0; i < n; i++)
    cin >> k[i];
  map<int, int> end;
  int l = 0, ans = 0;

  for (int r = 0; r < n; r++)
  {
    int music = k[r];
    if (end.count(music) && end[music] >= l)
    {
      l = end[music] + 1;
    }
    end[music] = r;
    ans = max(ans, r - l + 1);
  }
  cout << ans << "\n";
}
