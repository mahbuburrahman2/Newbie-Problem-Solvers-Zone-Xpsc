#include <bits/stdc++.h>
using namespace std;

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  string s;
  cin >> s;

  for (char c = 'a'; c <= 'z'; c++)
  {
    if (count(s.begin(), s.end(), c) == 0)
    {
      cout << c;
      return 0;
    }
  }
  cout << "None";
  return 0;
}
