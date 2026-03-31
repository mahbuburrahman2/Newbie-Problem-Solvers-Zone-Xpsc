#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(const string &x)
{
  int l = 0, r = x.length() - 1;
  while (l < r)
  {
    if (x[l] != x[r])
      return false;
    l++;
    r--;
  }
  return true;
}

int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int n;
    string s;
    cin >> n >> s;

    bool found = false;
    vector<int> bestIndices;

    // Try all subsets of indices for p
    for (int mask = 0; mask < (1 << n); mask++)
    {
      string p, x;
      vector<int> indices;
      for (int i = 0; i < n; i++)
      {
        if (mask >> i & 1)
        {
          p += s[i];
          indices.push_back(i + 1); // 1-based index
        }
        else
        {
          x += s[i];
        }
      }

      // Check p non-decreasing
      bool nonDecreasing = true;
      for (int i = 0; i + 1 < p.length(); i++)
      {
        if (p[i] > p[i + 1])
        {
          nonDecreasing = false;
          break;
        }
      }

      // Check x palindrome
      if (nonDecreasing && isPalindrome(x))
      {
        found = true;
        bestIndices = indices;
        break; // take first found
      }
    }

    if (found)
    {
      cout << bestIndices.size() << "\n";
      if (!bestIndices.empty())
      {
        for (int idx : bestIndices)
          cout << idx << " ";
        cout << "\n";
      }
    }
    else
    {
      cout << "-1\n";
    }
  }
  return 0;
}