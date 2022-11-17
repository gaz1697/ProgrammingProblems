#include <bits/stdc++.h>
using namespace std;

signed main(int argc, char const *argv[]) {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  string k;
  cin >> k;
  bool zero = false;
  int i = 0;
  for (i = 0; i < k.length(); i++) {
    if(k[i] == '0'){
      zero = true;
      break;

    }
  }
    if(zero){
        std::cout << k.substr(0,i)<< k.substr(i+1,k.length()) << '\n';}
    else {
      std::cout << k.substr(0,k.length()-1) << std::endl;
    }

}
