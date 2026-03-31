#include <bits/stdc++.h>
using namespace std;
using ll = long long;

bool feasible(int t, const vector<ll> &A_desc, const vector<ll> &B_desc)
{
  if (t == 0)
    return true;

  multiset<ll> sb;
  for (int i = 0; i < t; ++i)
    sb.insert(B_desc[i]);

  for (int i = 0; i < t; ++i)
  {
    ll a = A_desc[i];

    auto it = prev(sb.end());
    if (*it != a)
    {
      sb.erase(it);
      continue;
    }

    auto it2 = sb.begin();
    if (*it2 != a)
    {
      sb.erase(it2);
      continue;
    }
    return false;
  }
  return true;
}

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int T;
  if (!(cin >> T))
    return 0;
  while (T--)
  {
    int N, M;
    cin >> N >> M;
    vector<ll> A(N), B(M);
    for (int i = 0; i < N; ++i)
      cin >> A[i];
    for (int i = 0; i < M; ++i)
      cin >> B[i];

    sort(A.begin(), A.end(), greater<ll>());
    sort(B.begin(), B.end(), greater<ll>());

    int k = min(N, M);
    int lo = 0, hi = k, best = 0;
    while (lo <= hi)
    {
      int mid = (lo + hi) / 2;
      if (feasible(mid, A, B))
      {
        best = mid;
        lo = mid + 1;
      }
      else
        hi = mid - 1;
    }

    ll sum = 0;
    for (int i = 0; i < best; ++i)
      sum += A[i];
    for (int i = 0; i < best; ++i)
      sum += B[i];
    cout << sum << '\n';
  }
  return 0;
}
