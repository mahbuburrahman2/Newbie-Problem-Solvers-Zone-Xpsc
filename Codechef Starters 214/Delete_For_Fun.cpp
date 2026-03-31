#include <bits/stdc++.h>
using namespace std;

bool solveTry(int N, int K, const string &S, vector<int> &ans, bool right)
{
  ans.clear();
  if (S[K] == '0')
    return false;

  int score = 1;
  ans.push_back(K + 1);

  deque<int> d;
  for (int i = 1; i < N; i++)
    d.push_back((K + i) % N);

  int x = right ? d.front() : d.back();
  if (right)
    d.pop_front();
  else
    d.pop_back();
  ans.push_back(x + 1);
  score -= (S[x] - '0');
  if (score <= 0)
    return false;

  for (int step = 3; step <= N; step++)
  {
    int L = d.front(), R = d.back();
    int lv = S[L] - '0', rv = S[R] - '0';
    bool takeL;

    if (step & 1)
    { // odd => want 1
      if (lv == 1)
        takeL = true;
      else if (rv == 1)
        takeL = false;
      else
        takeL = true;
    }
    else
    { // even => want 0
      if (lv == 0)
        takeL = true;
      else if (rv == 0)
        takeL = false;
      else
      {
        if (score < 2)
          return false;
        takeL = true;
      }
    }

    int y = takeL ? d.front() : d.back();
    if (takeL)
      d.pop_front();
    else
      d.pop_back();

    ans.push_back(y + 1);

    int c = S[y] - '0';
    if (step & 1)
      score += c;
    else
      score -= c;

    if (score <= 0)
      return false;
  }
  return true;
}

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int T;
  cin >> T;
  while (T--)
  {
    int N, K;
    string S;
    cin >> N >> K >> S;
    K--;

    vector<int> ans;
    if (solveTry(N, K, S, ans, true) || solveTry(N, K, S, ans, false))
    {
      for (int x : ans)
        cout << x << " ";
      cout << "\n";
    }
    else
      cout << -1 << "\n";
  }
}
