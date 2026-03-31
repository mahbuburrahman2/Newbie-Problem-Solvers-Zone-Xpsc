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

    vector<int> seen(N, 0);
    vector<long long> extra, missing;

    for (long long x : A)
    {
      if (x < N && !seen[x])
        seen[x] = 1;
      else
        extra.push_back(x);
    }

    for (int k = 0; k < N; k++)
      if (!seen[k])
        missing.push_back(k);

    sort(extra.begin(), extra.end());
    sort(missing.begin(), missing.end());

    long long ans = 0;

    for (int i = 0; i < (int)missing.size(); i++)
      ans += llabs(extra[i] - missing[i]);

    cout << ans << "\n";
  }
}
