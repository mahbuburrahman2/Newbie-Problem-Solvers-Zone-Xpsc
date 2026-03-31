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
    ll n;
    int k;
    cin >> n >> k;

    if (k % 2 == 1)
    {
      for (int i = 0; i < k; i++)
        cout << n << " ";
    }
    else
    {
      cout << n - 1 << " " << 1 << " ";
      for (int i = 2; i < k; i++)
        cout << n << " ";
    }
    cout << "\n";
  }
  return 0;
}
