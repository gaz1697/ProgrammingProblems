#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[]) {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int t;
  set<string> sets;
  vector<string> v;
  std::cin >> t;
  while (t--) {
    string k;
    std::cin >> k;
    v.push_back(k);
  }

  for(auto it = v.rbegin(); it != v.rend(); it++){
      if(sets.find(*it)==sets.end()){
        cout << *it << '\n';
        sets.insert(*it);
      }
  }

  return 0;
}
