#include <bits/stdc++.h>
using namespace std;


signed main(int argc, char const *argv[]) {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int m,n,v;
  cin >> m >> n;
  int ans[m][n];
  int mat[m][n];
  for(int i = 0; i < m; i++){
    for(int j = 0; j < n; j++){
      cin >> mat[i][j];
    }
  }
  ans[0][0]= mat[0][0];
  for(int i = 0; i < m; i++){
    for(int j = 0; j < n; j++){
      if(i == 0 && j ==0){

      }else{
        int a = 0;
        int b = 0;
        if(i - 1 >= 0){
          a = ans[i-1][j];
        }
        if(j-1 >= 0){
          b = ans[i][j-1];
        }
        int k = mat[i][j]+max(a,b);
        ans[i][j]=k;

      }

    }
  }
  for(int i = 0; i < m; i++){
    for(int j = 0; j < n; j++){

      cout << ans[i][j]<< " ";
    }
    cout << "\n";
  }

}
