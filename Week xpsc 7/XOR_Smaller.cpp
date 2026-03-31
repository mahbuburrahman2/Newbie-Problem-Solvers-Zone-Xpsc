#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
  int tcc;
  cin >> tcc;
  while (tcc--)
  {
    int n;
    cin >> n;
    // vector<int>v(n);
    int ans = INT_MAX;
    for (int i = 0; i < n; i++)
    {
      // cin>>v[i];
      int a;
      cin >> a;
      ans = ans & a;
    }
    cout << ans << endl;
  }
  return 0;
}