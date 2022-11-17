#include <bits/stdc++.h>
using namespace std;

long long dot_product(long long vector_a[], long long vector_b[],int nn) {
   long long product = 0;
   for (int i = 0; i < nn; i++)
   product = product + vector_a[i] * vector_b[i];
   return product;
}

signed main(int argc, char const *argv[]) {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int t,m,n;
  long long v;
  cin >> t;
  while (t--) {

    cin >> m >> n;
    long long arr1[m][n];

    for (int i = 0; i < m; i++) {
      for (int k = 0; k < n; k++) {
        cin >> v;
        arr1[i][k] = v;
      }
    }


    long long maxDP = 0;
    for(int i = 0; i < m; i++){
        for(int k = 0; k < m; k++){
            if(i != k){
             long long dotP = dot_product(arr1[i],arr1[k],n);
             if(dotP > maxDP){
                 maxDP = dotP;
             }
            }




        }
    }
    std::cout << maxDP << std::endl;


  }


  }
