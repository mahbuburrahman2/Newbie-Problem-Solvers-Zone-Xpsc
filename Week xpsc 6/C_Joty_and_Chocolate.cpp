#include <bits/stdc++.h>
using namespace std;
using ll = long long;

ll LCM(ll a, ll b)
{
  return (a / __gcd(a, b)) * b;
}

int main()
{
  ll n, a, b, p, q;
  cin >> n >> a >> b >> p >> q;
  ll x = (n / a) * p, y = (n / b) * q, overlap = (n / LCM(a, b));
  ll ans = ((x + y) - (overlap * (p + q))) + (overlap * max(p, q));
  cout << ans << "\n";
  return 0;
}

// 2nd way...............

// #include <bits/stdc++.h>
// using namespace std;
// using ll = long long;

// int main()
// {
//   ll n, a, b, p, q;
//   cin >> n >> a >> b >> p >> q;

//   ll g = __gcd(a, b);
//   ll l = (a / g) * b; // lcm

//   ll A = n / a;
//   ll B = n / b;
//   ll C = n / l;

//   ll ans = (A - C) * p + (B - C) * q + C * max(p, q);
//   cout << ans;
// }
