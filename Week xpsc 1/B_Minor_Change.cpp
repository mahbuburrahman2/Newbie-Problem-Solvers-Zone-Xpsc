#include <bits/stdc++.h>
using namespace std;

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  string S, T;
  cin >> S >> T;
  int cnt = 0;
  int i = 0;
  for (char c : S)
  {
    cnt += (c != T[i]);
    i++;
  }
  cout << cnt << "\n";
  return 0;
}