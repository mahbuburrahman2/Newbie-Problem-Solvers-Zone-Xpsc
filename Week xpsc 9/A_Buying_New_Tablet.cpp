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
    int n, b;
    cin >> n >> b;

    int mx = 0;

    for (int i = 0; i < n; i++)
    {
      int w, h, p;
      cin >> w >> h >> p;

      if (p <= b)
      {
        int area = w * h;
        if (area > mx)
        {
          mx = area;
        }
      }
    }

    if (mx == 0)
    {
      cout << "no tablet" << endl;
    }
    else
    {
      cout << mx << endl;
    }
  }

  return 0;
}
