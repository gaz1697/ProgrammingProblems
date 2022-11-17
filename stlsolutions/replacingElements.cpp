#include <bits/stdc++.h>
using namespace std;

signed main(int argc, char const *argv[]) {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int t;
  cin >> t;
  while (t--) {
    int n,posmax,max,min1,min2;
    max = 0;
    min1 = 0;
    min2 = 0;
    cin >> n;
    cin >> posmax;
    int a;
    cin >> a;
    max = a;
    min1 = a;
    n--;
    while (n--) {
      int a;
      cin >> a;
      if(a > max){
        max = a;
      }
      if(a < min1 ){
        min2 = min1;
        min1 = a;
      }
    }
    if(max <= posmax){
      std::cout << "YES" << '\n';
    }else if(min1+min2 <= posmax){
      std::cout << "YES" << '\n';
    }else{
      std::cout << "NO" << '\n';
    }
  }


}
