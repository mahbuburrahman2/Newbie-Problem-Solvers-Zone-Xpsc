#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 10;
const int m = 1e9 + 7;
long long int arr[N];

int main()
{
  int t;
  cin >> t;
  arr[1] = 1;
  for (int i = 2; i <= N; ++i)
  {
    arr[i] = (arr[i - 1] * 2) % m;
  }
  while (t--)
  {
    int n;
    cin >> n;
    cout << arr[n] << endl;
  }
  return 0;
}