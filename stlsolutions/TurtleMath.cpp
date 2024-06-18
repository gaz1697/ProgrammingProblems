#include <iostream>
#include <vector>
#include <cstdlib>
using namespace std;
int main(int argc, char const *argv[]) {


vector<int> pos;

long long total = 0;
int t ;
cin >> t;
while (t--) {
  total = 0;
  int n ;
  cin >> n;
  bool modThreeIsOne = false;
  while(n--){
    int v;
    cin >> v;
    if(v % 3 == 1){
        modThreeIsOne = true;
    }
    total += v;
  }
  if(total % 3 == 0){
    cout << 0 << '\n';
  }else if(total % 3 == 1){
    if(modThreeIsOne == true){
        cout << 1 << '\n';
    }else {
        cout << 2 << '\n';
    }
  }else {
    cout << 1 << '\n';
  }



}



    return 0;
}
