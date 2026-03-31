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
    int cnt[11] = {0};
    int sum = 0;

    for (int i = 0; i < 5; i++)
    {
      int x;
      cin >> x;
      cnt[x]++;
      sum += x;
    }

    if (sum >= 35)
    {
      cout << 0 << "\n";
      continue;
    }

    int need = 35 - sum;
    int bribes = 0;

    for (int rating = 0; rating <= 9 && need > 0; rating++)
    {
      while (cnt[rating] > 0 && need > 0)
      {
        need -= (10 - rating);
        cnt[rating]--;
        bribes++;
      }
    }

    cout << bribes * 100 << "\n";
  }
}
