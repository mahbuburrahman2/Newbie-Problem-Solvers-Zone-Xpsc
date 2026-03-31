#include <bits/stdc++.h>
using namespace std;
int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n;
  cin >> n;
  string word;
  for (int i = 0; i < n; i++)
  {
    cin >> word;
    if (i % 2 == 0)
    {
      cout << word << endl;
    }
  }
  return 0;
}
