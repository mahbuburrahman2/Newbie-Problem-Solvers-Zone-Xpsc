#include <bits/stdc++.h>
using namespace std;

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t;
  cin >> t;
  while (t--)
  {
    int n;
    string b;
    cin >> n >> b;

    vector<int> freq(26, 0);
    for (char c : b)
      freq[c - 'a'] = 1;

    string r;
    for (int i = 0; i < 26; i++)
      if (freq[i])
        r.push_back('a' + i);

    map<char, char> mp;
    int len = r.size();
    for (int i = 0; i < len; i++)
      mp[r[i]] = r[len - 1 - i];

    for (char &c : b)
      c = mp[c];

    cout << b << '\n';
  }
}
