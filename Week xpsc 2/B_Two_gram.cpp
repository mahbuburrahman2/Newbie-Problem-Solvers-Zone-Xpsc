#include <bits/stdc++.h>
using namespace std;
int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n;
  string s;
  cin >> n >> s;
  map<string, int> freq;
  string mst;
  int mx = 0;
  for (int i = 0; i + 1 < n; i++)
  {
    string t = "";
    t += s[i];
    t += s[i + 1];
    freq[t]++;
    if (freq[t] > mx)
    {
      mx = freq[t];
      mst = t;
    }
  }
  cout << mst;
}
