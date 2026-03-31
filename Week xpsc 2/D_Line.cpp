#include <bits/stdc++.h>
using namespace std;
using ll = long long;

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
    string s;
    cin >> s;

    ll total = 0;
    priority_queue<ll> pq;

    for (int i = 0; i < n; i++)
    {
      ll left = i;
      ll right = n - i - 1;

      if (s[i] == 'L')
        total += left;
      else
        total += right;

      ll g = 0;
      if (s[i] == 'L')
      {
        if (right > left)
          g = right - left;
      }
      else
      {
        if (left > right)
          g = left - right;
      }

      if (g > 0)
        pq.push(g);
    }

    for (int k = 1; k <= n; k++)
    {
      if (!pq.empty())
      {
        total += pq.top();
        pq.pop();
      }
      cout << total << " ";
    }
    cout << "\n";
  }
}
