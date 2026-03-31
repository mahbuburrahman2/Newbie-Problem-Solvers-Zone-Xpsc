#include <bits/stdc++.h>
using namespace std;
using ll = long long;

struct DSU
{
  vector<int> p;
  DSU(int n) : p(n + 1) { iota(p.begin(), p.end(), 0); }
  int find(int x) { return p[x] == x ? x : p[x] = find(p[x]); }
  bool unite(int a, int b)
  {
    a = find(a);
    b = find(b);
    if (a == b)
      return false;
    p[b] = a;
    return true;
  }
};

int N;
vector<vector<int>> g;
vector<int> depth, parent;
vector<int> euler, edep, firstOcc;
vector<vector<int>> st;
vector<int> lg2;

void dfs(int u, int p, int d)
{
  parent[u] = p;
  depth[u] = d;
  firstOcc[u] = euler.size();
  euler.push_back(u);
  edep.push_back(d);
  for (int v : g[u])
  {
    if (v == p)
      continue;
    dfs(v, u, d + 1);
    euler.push_back(u);
    edep.push_back(d);
  }
}

void build_rmq()
{
  int m = euler.size();
  lg2.assign(m + 1, 0);
  for (int i = 2; i <= m; i++)
    lg2[i] = lg2[i / 2] + 1;
  int K = lg2[m] + 1;
  st.assign(K, vector<int>(m));
  for (int i = 0; i < m; i++)
    st[0][i] = i;
  for (int k = 1; k < K; k++)
  {
    for (int i = 0; i + (1 << k) <= m; i++)
    {
      int a = st[k - 1][i], b = st[k - 1][i + (1 << (k - 1))];
      st[k][i] = (edep[a] < edep[b] ? a : b);
    }
  }
}

int LCA(int a, int b)
{
  int L = firstOcc[a], R = firstOcc[b];
  if (L > R)
    swap(L, R);
  int k = lg2[R - L + 1];
  int a1 = st[k][L], a2 = st[k][R - (1 << k) + 1];
  return euler[edep[a1] < edep[a2] ? a1 : a2];
}

int dist(int a, int b)
{
  int c = LCA(a, b);
  return depth[a] + depth[b] - 2 * depth[c];
}

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int T;
  cin >> T;
  while (T--)
  {
    cin >> N;
    vector<pair<int, int>> E(N + 1);
    for (auto &e : E)
      cin >> e.first >> e.second;

    DSU d(N);
    g.assign(N + 1, {});
    vector<pair<int, int>> extra;

    for (auto &e : E)
    {
      int u = e.first, v = e.second;
      if (d.unite(u, v))
      {
        g[u].push_back(v);
        g[v].push_back(u);
      }
      else
        extra.push_back(e);
    }

    bool ok = true;
    for (int i = 2; i <= N; i++)
      if (d.find(1) != d.find(i))
        ok = false;
    if (!ok)
    {
      cout << "0\n";
      continue;
    }

    depth.assign(N + 1, 0);
    parent.assign(N + 1, 0);
    euler.clear();
    edep.clear();
    firstOcc.assign(N + 1, -1);

    dfs(1, 0, 0);
    build_rmq();

    int u1 = extra[0].first, v1 = extra[0].second;
    int u2 = extra[1].first, v2 = extra[1].second;

    ll L1 = dist(u1, v1) + 1;
    ll L2 = dist(u2, v2) + 1;

    vector<int> A1(N + 1, 0), A2(N + 1, 0);
    int c1 = LCA(u1, v1), c2 = LCA(u2, v2);

    A1[u1]++;
    A1[v1]++;
    A1[c1] -= 2;
    A2[u2]++;
    A2[v2]++;
    A2[c2] -= 2;

    vector<int> order;
    vector<int> stc(1, 1), it(N + 1, 0);

    while (!stc.empty())
    {
      int u = stc.back();
      if (it[u] < (int)g[u].size())
      {
        int v = g[u][it[u]++];
        if (v != parent[u])
          stc.push_back(v);
      }
      else
      {
        order.push_back(u);
        stc.pop_back();
      }
    }

    int k = 0;
    for (int u : order)
    {
      for (int v : g[u])
        if (v != parent[u])
        {
          A1[u] += A1[v];
          A2[u] += A2[v];
        }
      if (u != 1 && A1[u] > 0 && A2[u] > 0)
        k++;
    }

    cout << (L1 * L2 - 1LL * k * k) << "\n";
  }
}
