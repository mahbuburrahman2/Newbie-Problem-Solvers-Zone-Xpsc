#include <bits/stdc++.h>
using namespace std;

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  // tuple<string, int, string> t = make_tuple("rahim", 10, "100");
  // tuple<string, int, string> t = {"rahim", 10, "100"};
  // auto [name, roll, phoneNumber] = t;
  // cout << name << " " << roll << " " << phoneNumber << '\n';

  // cout << get<0>(t) << " " << get<1>(t) << " " << get<2>(t) << '\n';

  // more tuple using
  pair<string, pair<int, string>> p = {"bablu", {5, "034"}};

  string name = p.first;
  int roll = p.second.first;
  string phoneNumber = p.second.second;
  cout << name << " " << roll << " " << phoneNumber << '\n';
  return 0;
}
