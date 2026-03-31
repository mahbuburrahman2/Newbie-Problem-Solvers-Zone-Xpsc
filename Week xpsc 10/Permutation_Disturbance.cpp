#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{

  int t;
  cin >> t;
  while (t--)
  {
    ll n;
    cin >> n;
    ll a[n];
    vector<int> v;
    for (ll i = 0; i < n; i++)
    {
      cin >> a[i];
      if (a[i] == i + 1)
      {
        v.push_back(i);
      }
    }
    int cnt = 0;
    for (int i = 0; i < n - 1; i++)
    {
      if (a[i] == i + 1)
      {
        swap(a[i], a[i + 1]);
        cnt++;
      }
    }
    if (a[n - 1] == n)
    {
      cnt++;
    }
    cout << cnt << endl;
  }
}