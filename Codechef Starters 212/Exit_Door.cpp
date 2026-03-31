#include <bits/stdc++.h>
using namespace std;
using ll = long long;
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
    vector<int> P(N), pos(N + 1);
    for (int i = 0; i < N; ++i)
    {
      cin >> P[i];
      pos[P[i]] = i;
    }

    set<int> r;
    ll total = 0;

    for (int p = N; p >= 1; --p)
    {
      int i = pos[p];
      auto it = r.lower_bound(i);
      int rl = distance(r.begin(), it);
      int rr = (int)r.size() - rl;

      int sl = i - rl;
      int sr = (N - 1 - i) - rr;

      total += min(sl, sr);
      r.insert(i);
    }

    cout << total << '\n';
  }
  return 0;
}
