#include <bits/stdc++.h>
using namespace std;

signed main(int argc, char const *argv[]) {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int t,n,k,m;
  cin >> t;
  while(t--){
    cin >> n >> k;
    int ld = 0;
    for (int i = 0; i < n; i++) {
          cin >> m;
          if(i == n-1){

              m += ld;
              std::cout << m << '\n';

          }else{

                if(m - k < 0){
                    ld += m;
                    k = k - m;
                    m = 0;
                }else{
                    m = m - k;
                    ld += k;
                    k = 0;
                }
                std::cout << m << " ";

          }


      }


    }




  }
