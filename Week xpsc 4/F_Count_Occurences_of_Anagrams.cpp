class Solution
{
public:
  int search(string &pat, string &txt)
  {
    int n = txt.size(), m = pat.size();
    vector<int> freqPat(26, 0), freqWin(26, 0);
    for (char c : pat)
      freqPat[c - 'a']++;
    int l = 0, r = 0, cnt = 0;
    while (r < n)
    {
      freqWin[txt[r] - 'a']++;
      if (r - l + 1 == m)
      {
        if (freqWin == freqPat)
          cnt++;
        freqWin[txt[l] - 'a']--;
        l++;
      }
      r++;
    }
    return cnt;
  }
};
