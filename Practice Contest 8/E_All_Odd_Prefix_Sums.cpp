#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int tc;
  cin >> tc;
  while (tc--)
  {
    int n;
    cin >> n;

    int odd = 0;
    vector<int> a(n);
    for (auto &x : a)
    {
      cin >> x;
      if (x % 2)
        odd++;
    }
    if (odd == 1)
      cout << "Yes\n";
    else
      cout << "No\n";
  }
  return 0;
}
