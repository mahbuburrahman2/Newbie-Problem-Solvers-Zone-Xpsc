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
    long long n, k;
    cin >> n >> k;

    ll d = n / k;

    for (int i = 1; i <= k; i++)
      cout << d * i << " ";
    cout << "\n";
  }
  return 0;
}
