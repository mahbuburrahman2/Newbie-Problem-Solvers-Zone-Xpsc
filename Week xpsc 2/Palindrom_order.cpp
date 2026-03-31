#include <bits/stdc++.h>
using namespace std;

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  string s;
  cin >> s;
  int cnt[26] = {0};
  for (char c : s)
  {
    cnt[c - 'A']++;
  }
  int odd = 0;
  char odd_char;
  for (int i = 0; i < 26; i++)
  {
    if (cnt[i] % 2)
    {
      odd++;
      odd_char = char(i + 'A');
    }
  }
  if (odd > 1)
  {
    cout << "NO SOLUTION";
  }
  else
  {
    string ans;
    for (int i = 0; i < 26; i++)
    {
      {
        if (cnt[i])
          ans.resize(ans.size() + cnt[i] / 2, i + 'A');
      }
    }
    string rev = ans;
    reverse(rev.begin(), rev.end());

    cout << ans;
    if (odd)
      cout << odd_char;
    cout << rev;
  }
  return 0;
}
