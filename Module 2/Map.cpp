#include <bits/stdc++.h>
using namespace std;

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  map<int, int> mp;
  mp[2] = 15;
  mp[10] = 12;
  mp[12] = 20;
  mp[8] = 22;
  // mp.insert({10, 20});
  // mp.insert({10, 20});

  // cout << mp[10] << '\n';
  // cout << mp[2] << '\n';

  // for (auto [key, value] : mp)
  // {
  //   cout << key << "->" << value << '\n';
  // }

  // for (auto it : mp)
  // {
  //   int key = it.first, value = it.second;
  //   cout << key << "->" << value << '\n';
  // }
  // cout << '\n';

  // auto it = mp.find(8);
  //  cout << it->first << "->" << it->second << '\n';
  //  if (it == mp.end())
  //  {
  //    cout << "Key not found" << '\n';
  //  }
  //  else
  //  {
  //    cout << it->first << "->" << it->second << '\n';
  //  }

  // cout << mp[55] << '\n';
  // cout << mp[22] << '\n';

  // for (auto it : mp)
  // {
  //   int key = it.first, value = it.second;
  //   cout << key << "->" << value << '\n';
  // }

  // mp.erase(8);
  // for (auto it : mp)
  // {
  //   int key = it.first, value = it.second;
  //   cout << key << "->" << value << '\n';
  // }

  // auto it = mp.find(10);
  // if (it != mp.end())
  // {
  //   mp.erase(it);
  // }

  // for (auto it : mp)
  // {
  //   int key = it.first, value = it.second;
  //   cout << key << "->" << value << '\n';
  // }

  // cout << mp.size() << '\n';
  // cout << mp.empty() << '\n';

  // auto it = mp.begin();
  // it++;
  // cout << it->first << " " << it->second << '\n';

  // mp[6] = 40;
  // for (auto it : mp)
  // {
  //   int key = it.first, value = it.second;
  //   cout << key << "->" << value << '\n';
  // }
  // auto it = mp.lower_bound(6);
  // cout << it->first << " " << it->second << '\n';

  mp[6] = 40;
  for (auto it : mp)
  {
    int key = it.first, value = it.second;
    cout << key << "->" << value << '\n';
  }
  auto it = mp.upper_bound(6);
  cout << it->first << " " << it->second << '\n';
  return 0;
}
