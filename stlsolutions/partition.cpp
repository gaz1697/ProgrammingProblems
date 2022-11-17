#include <bits/stdc++.h>
using namespace std;

signed main(int argc, char const *argv[]) {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int n;
  int bsum = 0;
  int csum = 0;
  cin >> n;
  while (n--) {
    int k;
    cin >> k;
    if(k < 0){
      csum +=k;
    }else {
      bsum +=k;
    }
  }

  std::cout << abs(bsum-csum) << '\n';
}
