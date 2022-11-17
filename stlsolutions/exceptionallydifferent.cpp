#include <bits/stdc++.h>
using namespace std;

signed main(int argc, char const *argv[]) {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int t,a,b;
  cin >> t;
  while (t--) {
    cin >> a >> b;
    if(a > b){
      std::cout << "NO" << '\n';
    }else{
      std::cout << "YES" << '\n';
    }
  }
}
