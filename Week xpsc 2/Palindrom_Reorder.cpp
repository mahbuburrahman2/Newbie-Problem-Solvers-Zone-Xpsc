#include <bits/stdc++.h>
using namespace std;
int main()
{
  string s;
  cin >> s;
  map<char, int> f;
  for (char c : s)
    f[c]++;

  int odd = 0;
  char mid = 0;
  for (auto [c, n] : f)
    if (n % 2)
      odd++, mid = c;
  if (odd > 1)
    return cout << "NO SOLUTION", 0;

  string left = "";
  for (auto [c, n] : f)
    left += string(n / 2, c);
  string right = left;
  reverse(right.begin(), right.end());
  cout << left << right;
}
