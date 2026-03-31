#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int t;
  cin >> t;
  while (t--)
  {
    int n;
    cin >> n;
    vector<string> a(n);
    for (auto &x : a)
      cin >> x;
    map<string, int> freq;
    ll ans = 0;
    for (int i = 0; i < n; i++)
    {
      string s = a[i];
      char fst = s[0];
      char snd = s[1];
      for (char c = 'a'; c <= 'k'; c++)
      {
        if (c == fst)
          continue;
        string t = "";
        t += c;
        t += snd;
        ans += freq[t];
      }
      for (char c = 'a'; c <= 'k'; c++)
      {
        if (c == snd)
          continue;
        string t = "";
        t += fst;
        t += c;
        ans += freq[t];
      }
      freq[s]++;
    }
    cout << ans << '\n';
  }
  return 0;
}
