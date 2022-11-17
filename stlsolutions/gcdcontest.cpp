#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b){
 	if(b==0) return a;
 	return gcd(b, a%b);
}

signed main(int argc, char const *argv[]) {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int t,q;
  int pos1 = 1;
  int pos2 = 2;
  cin >> t;
  while (t--) {
    cin >> q;
    if(q == 1){
      if(pos1 < pos2){
        pos1 +=2;
      }else{
        pos2 +=2;
      }
    }else{
      std::cout << gcd(pos1,pos2) << std::endl;
    }
  }
  }
