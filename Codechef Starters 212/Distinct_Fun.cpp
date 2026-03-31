#include <bits/stdc++.h>
using namespace std;

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int T;
  cin >> T;
  while (T--)
  {
    int N;
    cin >> N;

    vector<long long> A(N);
    for (auto &x : A)
      cin >> x;

    unordered_set<long long> s;
    int ans = 0;

    for (long long x : A)
    {
      if (s.count(x))
      {
        ans++;
        s.clear();
      }
      s.insert(x);
    }

    cout << ans << "\n";
  }
}
