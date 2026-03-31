#include <bits/stdc++.h>
using namespace std;

int main()
{
  int t;
  cin >> t;

  while (t--)
  {
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;

    // Count total 0s and 1s
    int count_0 = 0, count_1 = 0;
    for (char c : s)
    {
      if (c == '0')
        count_0++;
      else
        count_1++;
    }

    int min_0 = 0, max_0 = 0;
    for (int i = 0; i < k; i++)
    {
      int group_size = (n - i + k - 1) / k; // ceiling division
      min_0 += group_size / 2;
      max_0 += (group_size + 1) / 2;
    }

    if (count_0 >= min_0 && count_0 <= max_0)
    {
      cout << "Yes" << endl;
    }
    else
    {
      cout << "No" << endl;
    }
  }

  return 0;
}