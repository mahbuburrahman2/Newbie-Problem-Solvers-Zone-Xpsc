#include <iostream>
using namespace std;
int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int r1, s;
  cin >> r1 >> s;

  int dist = s - r1;
  int r2 = s + dist;
  cout << r2 << endl;
  return 0;
}
