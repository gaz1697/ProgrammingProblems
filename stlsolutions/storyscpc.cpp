#include <bits/stdc++.h>
using namespace std;

signed main(int argc, char const *argv[]) {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int a,b;
  cin >> a >> b;
  if(a+b == a*b){
    std::cout << "Yes" << '\n';
  }else{
    std::cout << "NO" << '\n';
  }
}
