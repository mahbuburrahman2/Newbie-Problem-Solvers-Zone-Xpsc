#include <bits/stdc++.h>
using namespace std;

int main()
{
  int t;
  cin >> t;

  while (t--)
  {
    int n;
    cin >> n;

    string s;
    cin >> s;

    char last = s[n - 1];
    int cnt = 0;

    for (char c : s)
    {
      if (c == last)
        cnt++;
    }

    cout << n - cnt << "\n";
  }
  return 0;
}
