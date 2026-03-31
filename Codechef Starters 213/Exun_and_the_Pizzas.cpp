#include <bits/stdc++.h>
using namespace std;
int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n, k, r;
  cin >> n >> k >> r;

  int rem = n - k;
  int rev = rem * r;

  cout << rev;
  return 0;
}
