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
    vector<int> a(n);
    for (int i = 0; i < n; i++)
      cin >> a[i];

    int avoid = a[0];
    vector<int> result;

    // Generate numbers 1 to n in order, skipping 'avoid'
    for (int i = 1; i <= n && result.size() < k; i++)
    {
      if (i != avoid)
      {
        result.push_back(i);
      }
    }

    // If we need more, wrap around starting from 1 again
    int idx = 1;
    while (result.size() < k)
    {
      if (idx != avoid)
      {
        result.push_back(idx);
      }
      idx = (idx % n) + 1;
    }

    for (int i = 0; i < k; i++)
    {
      cout << result[i];
      if (i < k - 1)
        cout << " ";
    }
    cout << endl;
  }
  return 0;
}