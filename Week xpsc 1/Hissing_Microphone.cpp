#include <bits/stdc++.h>
using namespace std;
int main()
{
  string word;
  cin >> word;
  if (word.find("ss") != string::npos)
  {
    cout << "hiss" << endl;
  }
  else
  {
    cout << "no hiss" << endl;
  }
  return 0;
}