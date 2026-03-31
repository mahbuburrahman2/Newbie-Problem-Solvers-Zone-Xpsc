#include <bits/stdc++.h>
using namespace std;
int main()
{
  int tc;
  cin >> tc;

  while (tc--)
  {
    int n;
    cin >> n;

    if (n <= 2)
    {
      cout << "-1\n";
      continue;
    }

    vector<int> ans;

    if (n % 2 == 1)
    {
      for (int i = 1; i <= n; i++)
        ans.push_back(i);
    }
    else
    {
      for (int i = 1; i <= n - 3; i++)
        ans.push_back(i);

      ans.push_back(n);
      ans.push_back(n - 2);
      ans.push_back(n - 1);
    }

    for (int x : ans)
      cout << x << " ";
    cout << "\n";
  }

  return 0;
}
