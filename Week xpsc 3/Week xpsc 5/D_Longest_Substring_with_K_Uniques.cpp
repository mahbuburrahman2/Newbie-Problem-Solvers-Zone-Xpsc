#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
  int longestKSubstr(string &s, int k)
  {
    int n = s.size();
    int l = 0, r = 0, ans = -1;
    map<char, int> cnt;

    while (r < n)
    {
      cnt[s[r]]++;

      // shrink window if we have more than k distinct characters
      while (cnt.size() > k)
      {
        cnt[s[l]]--;
        if (cnt[s[l]] == 0)
          cnt.erase(s[l]);
        l++;
      }

      // update answer when we have exactly k distinct characters
      if (cnt.size() == k)
        ans = max(ans, r - l + 1);

      r++;
    }
    return ans;
  }
};

int main()
{
  string s;
  int k;
  cin >> s >> k;
  Solution ob;
  cout << ob.longestKSubstr(s, k) << endl;
  return 0;
}
