#include <bits/stdc++.h>
using namespace std;

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n;
  cin >> n;

  map<string, int> freq;
  string name;

  for (int i = 0; i < n; i++)
  {
    cin >> name;
    if (freq[name] > 0)
      cout << "YES\n";
    else
      cout << "NO\n";
    freq[name]++;
  }

  return 0;
}
