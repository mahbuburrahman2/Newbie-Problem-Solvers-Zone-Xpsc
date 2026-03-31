#include <bits/stdc++.h>
using namespace std;

bool ok(int a, int b)
{
  int big = max(a, b);
  int small = min(a, b);
  return (big & small) == small;
}

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int Tc;
  cin >> Tc;
  while (Tc--)
  {
    int N;
    cin >> N;

    vector<int> A(N);
    for (int &x : A)
      cin >> x;

    sort(A.begin(), A.end());

    vector<int> dp(N, 1);
    int ans = 1;

    for (int i = 0; i < N; i++)
    {
      for (int j = 0; j < i; j++)
      {
        if (ok(A[j], A[i]))
        {
          dp[i] = max(dp[i], dp[j] + 1);
        }
      }
      ans = max(ans, dp[i]);
    }

    cout << ans << "\n";
  }

  return 0;
}
