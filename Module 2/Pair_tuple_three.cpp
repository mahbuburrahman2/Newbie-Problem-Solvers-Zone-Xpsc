#include <bits/stdc++.h>
using namespace std;

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  // pair<string, int> student = {"dablu", 10};
  // cout << student.first << " " << student.second << '\n';
  // student.first = "bablu";

  // auto [name, roll] = student;
  // cout << name << " " << roll << '\n';

  int n;
  cin >> n;
  pair<string, int> student[n];
  for (int i = 0; i < n; i++)
  {
    cin >> student[i].first >> student[i].second;
  }
  for (int i = 0; i < n; i++)
  {
    cout << student[i].first << " " << student[i].second << '\n';
  }
  // for(auto [x,y]: student)
  // {
  //   cout << x << " " << y << '\n';
  // }
  return 0;
}
