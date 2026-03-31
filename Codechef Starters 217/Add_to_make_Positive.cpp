#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int tccc;
  cin >> tccc;
  while (tccc--)
  {
    int n;
    cin >> n;
    vector<int> a(n);
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
      cin >> a[i];
      sum += a[i];
    }
    int x = 0;
    while (sum < 0)
    {
      sum += n;
      x++;
    }
    cout << x << endl;
  }
  return 0;
}
