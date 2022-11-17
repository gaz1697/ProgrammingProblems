#include <bits/stdc++.h>
using namespace std;

signed main(int argc, char const *argv[]) {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int t;
  cin >> t;
  int n,m,a,res;
  while(t--){
    res = 0;
    string values;
    cin >> n >> m >> a;
    cin >> values;

    if(a >= 0){
      res = n*(m+a);
    }else{
      int count = 1;
      int l = 0;
      char firstD = values[0];
      int sNum = 0;
      for(int i = 1 ; i < n ;i++){
        char d = values[i];

        if(d != firstD){
          l++;
          sNum++;
        }else{
          if(d!= values[i-1]){

            res += (l*(m))+a;
            l = 0;
          }
        }

    }
    if(l!= 0){
       res += (l*(m))+a;
    }
    res+= ((n-sNum)*m)+a;
    }

    std::cout << res << '\n';

  }
}
