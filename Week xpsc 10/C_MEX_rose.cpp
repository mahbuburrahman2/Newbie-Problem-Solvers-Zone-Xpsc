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
    vector<int> freq(n + 1, 0);

    for (int i = 0; i < n; i++)
    {
      cin >> a[i];
      freq[a[i]]++;
    }

    int mis = 0;

    for (int i = 0; i < k; i++)
    {
      if (freq[i] == 0)
        mis++;
    }

    if (mis > freq[k])
      cout << mis << "\n";
    else
      cout << freq[k] << "\n";
  }
  return 0;
}
