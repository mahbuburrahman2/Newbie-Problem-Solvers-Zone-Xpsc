#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  ll tc;
  cin >> tc;
  while (tc--)
  {
    ll n, k;
    cin >> n >> k;
    if (n == 1 || k == 1)
    {
      if (n % 2 == 0)
        cout << "EVEN" << "\n";
      else
        cout << "ODD" << "\n";
    }
    else if (k == 2)
      cout << "ODD" << "\n";
    else if (k > 2)
      cout << "EVEN" << "\n";
  }
}