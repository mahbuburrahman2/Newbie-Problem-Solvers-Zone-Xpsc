#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int tc;
  cin >> tc;
  while (tc--)
  {
    int n, k;
    cin >> n >> k;
    vector<int> arr(n);
    for (auto &x : arr)
    {
      cin >> x;
    }
    for (int i = 0; i < k; i++)
    {
      arr.back() += arr[i];
    }
    for (auto it = arr.begin() + k; it != arr.end(); it++)
    {
      cout << *it << " ";
    }
    cout << "\n";
  }

  return 0;
}
