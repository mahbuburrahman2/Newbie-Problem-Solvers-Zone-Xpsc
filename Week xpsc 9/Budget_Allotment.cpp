#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t;
  cin >> t;
  while (t--)
  {
    int n, x;
    cin >> n >> x;

    vector<int> a(n);
    for (int &v : a)
      cin >> v;

    sort(a.begin(), a.end());

    ll pow = 0;
    ll cnt = 0;

    for (int i = n - 1; i >= 0; i--)
    {
      if (a[i] >= x)
      {
        pow += (a[i] - x);
        cnt++;
      }
      else
      {
        ll req = x - a[i];
        if (pow >= req)
        {
          pow -= req;
          cnt++;
        }
        else
        {
          break;
        }
      }
    }

    cout << cnt << '\n';
  }
  return 0;
}
