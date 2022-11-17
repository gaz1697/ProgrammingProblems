#include <bits/stdc++.h>
using namespace std;

signed main(int argc, char const *argv[]) {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int c1,c2,c3,a1,a2,a3,a4,a5,t;
  cin >> t;
  while(t--){

    cin >> c1 >> c2 >> c3 >> a1 >> a2 >> a3 >> a4 >> a5;
    int b1 = 0;
    int b2 = 0;
    int b3 = 0;
    b1+=a1;
    b2+=a2;
    b3+=a3;
    if(b1 > c1 || b2 > c2 || b3 > c3){
      std::cout << "NO" << '\n';
      continue;
    }

    b1+=a4;
    if(b1 > c1){
      b3+= b1-c1;
      if(b3 > c3){
        std::cout << "NO" << '\n';
        continue;
      }
    }
    b2+=a5;
    if(b2 > c2){
      b3+= b2-c2;
      if(b3 > c3){
        std::cout << "NO" << '\n';
        continue;
      }
    }










    std::cout << "YES" << '\n';
  }
}
