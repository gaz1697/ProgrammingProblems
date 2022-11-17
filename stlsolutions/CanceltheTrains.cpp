#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[]) {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int t;
  cin >> t;
  while(t--){
  set<int> mySet;
  int a , b;
  int s = 0;
  int k;
  std::cin >> a >> b;
  while (a--) {

    std::cin >> k;
    mySet.insert(k);
  }while (b--) {
    std::cin >> k;
    if(mySet.find(k) != mySet.end()){
      s++;
    }

  }
  std::cout << s << '\n';}
  return 0;
}
