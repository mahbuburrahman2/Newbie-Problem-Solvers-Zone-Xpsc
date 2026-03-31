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
    string S;
    cin >> N >> S;

    int cnt2 = 0, cnt1 = 0;
    for (int i = 0; i + 1 < N; ++i)
    {
      if (S[i] == '0' && S[i + 1] == '0')
        cnt2++;
      if (S[i] == '1' && S[i + 1] == '1')
        cnt1++;
    }

    if (cnt1 >= cnt2)
      cout << 0 << '\n';
    else
    {
      int diff = cnt2 - cnt1;
      cout << (diff + 1) / 2 << '\n';
    }
  }
  return 0;
}
