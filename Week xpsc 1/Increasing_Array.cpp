#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
  ll n;
  cin >> n;

  ll mv = 0;
  ll fst_ele;
  cin >> fst_ele;

  for (int i = 1; i < n; i++)
  {
    ll x;
    cin >> x;

    if (x < fst_ele)
      mv += fst_ele - x;
    fst_ele = max(fst_ele, x);
  }

  cout << mv << endl;
  return 0;
}
