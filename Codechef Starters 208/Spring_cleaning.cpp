#include <bits/stdc++.h>
using namespace std;

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int x, y;
  cin >> x >> y;
  int sum = 0;
  int small = x * 30;
  int large = y * 60;

  sum = small + large;
  cout << sum << "\n";
}