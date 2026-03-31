#include <bits/stdc++.h>
using namespace std;
int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n, p;
  cin >> n >> p;
  cin.ignore();
  string s;
  for (int i = 0; i < n; i++)
  {
    getline(cin, s);
  }
  cout << p << "\n";
  return 0;
}
