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
    int N, M;
    cin >> N >> M;

    vector<ll> A(N), B(N);
    ll sumA = 0, sumB = 0;

    for (int i = 0; i < N; i++)
    {
      cin >> A[i];
      sumA += A[i];
    }

    for (int i = 0; i < N; i++)
    {
      cin >> B[i];
      sumB += B[i];
    }

    unordered_map<ll, ll> freq;
    for (ll x : A)
      freq[x]++;
    for (ll x : B)
      freq[x]++;

    ll ans = sumA + sumB;

    for (auto &p : freq)
    {
      ll value = p.first;
      ll count = p.second;

      if (count > N)
      {

        ll total = sumA + sumB;

        ll others = total - value * count;

        ans = value * (2LL * N - count) + others;
        break;
      }
    }

    cout << ans << "\n";
  }

  return 0;
}
