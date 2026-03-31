#include <bits/stdc++.h>
using namespace std;
int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t;
  cin >> t;
  while (t--)
  {
    int n;
    cin >> n;

    vector<int> nums;
    for (int i = 1; i <= n; i++)
      nums.push_back(i);

    vector<pair<int, int>> ans;

    while (nums.size() > 1)
    {
      int a = nums.back();
      nums.pop_back();
      int b = nums.back();
      nums.pop_back();
      ans.push_back({b, a});
      nums.push_back((a + b + 1) / 2);
    }

    cout << nums[0] << "\n";
    for (auto p : ans)
      cout << p.first << " " << p.second << "\n";
  }
  return 0;
}
