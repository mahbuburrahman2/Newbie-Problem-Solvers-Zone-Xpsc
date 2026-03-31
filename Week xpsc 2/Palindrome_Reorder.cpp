#include <bits/stdc++.h>
using namespace std;

int main()
{
  string s;
  cin >> s;

  map<char, int> freq;
  for (char c : s)
    freq[c]++;

  int odd = 0;
  char mid = 0;
  for (auto p : freq)
    if (p.second % 2)
    {
      odd++;
      mid = p.first;
    }

  if (odd > 1)
  {
    cout << "NO SOLUTION";
    return 0;
  }

  string half = "";
  for (auto p : freq)
    half += string(p.second / 2, p.first);

  string rev = half;
  reverse(rev.begin(), rev.end());

  if (mid)
    cout << half << string(freq[mid], mid) << rev;
  else
    cout << half << rev;
}
