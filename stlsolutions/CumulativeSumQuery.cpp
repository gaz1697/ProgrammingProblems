#include <bits/stdc++.h>
using namespace std;

signed main(int argc, char const *argv[]) {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int n,q,lb,rb;
  cin >> n;
  int arr[n];
  for(int i = 0; i < n; i++ ){
    int inp;
    cin >> inp;
    if(i == 0){

      arr[i] = inp;

    }else{
    arr[i] = arr[i-1]+inp;}


  }
  std::cin >> q;
  while (q--) {
    cin >> lb;
    cin >> rb;
    int result;
    if(lb == 0){
        result = arr[rb];
    }else{
        result =  arr[rb] - arr[lb-1];
    }
    cout << result<< endl;

  }




  }
