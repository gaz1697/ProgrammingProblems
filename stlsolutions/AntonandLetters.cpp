#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[]) {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  string k;
  std::getline(cin,k);
  set<char>mySet;
  for (size_t i = 1; i < k.length()-1; i+=3) {
    mySet.insert(k[i]);

  }
  std::cout << mySet.size() << '\n';
  return 0;
}
