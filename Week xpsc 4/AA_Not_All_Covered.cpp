#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, m;
    if (!(cin >> n >> m))
        return 0;
    vector<int> l(m), r(m);
    vector<int> diff(n + 3, 0);

    for (int i = 0; i < m; ++i)
    {
        cin >> l[i] >> r[i];
        diff[l[i]] += 1;
        diff[r[i] + 1] -= 1;
    }
    int cur = 0;
    int ans = INT_MAX;
    for (int i = 1; i <= n; ++i)
    {
        cur += diff[i];
        ans = min(ans, cur);
    }
    cout << ans << "\n";
    return 0;
}
