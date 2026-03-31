#include <iostream>
using namespace std;
int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int r;
  cin >> r;
  if (r <= 4)
    cout << "YES";
  else
    cout << "NO";
  return 0;
}
