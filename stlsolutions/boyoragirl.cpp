#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[]) {
  std::map<string, int> names;
  std::map<string, int>::iterator it;
  int t;
  std::cin >> t;
  string n;
  while(t--){
    std::cin >> n;
    it = names.find(n);
    if(it != names.end()){
      names[n] = names[n]+1;
      std::cout << n << names[n]<< '\n';
    }else{
      std::cout << "ok" << '\n';
      names.insert(pair<string, int>(n, 0));
    }

  }


  return 0;
}
