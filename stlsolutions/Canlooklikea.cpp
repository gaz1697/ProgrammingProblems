#include <bits/stdc++.h>
using namespace std;
long long arr1[100001];
signed main(int argc, char const *argv[]) {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int t,n,q,l,r,c,x;
  long long v;
  float resualt;
  cin >> t;
  while (t--) {
    cin >> n;
    for (int i = 0; i < n; i++) {
      cin >> v;
      arr1[i] = v;
    }
    cin >> q;
    while (q--) {
      cin >> c;
      if(c == 1){
        for (int i = 1; i < n; i++) {
          arr1[i]= arr1[i]&arr1[i-1];
        }
      }else {
        cin>>l>>r >>x;
        l--;
        int max = -1;
        for (int i = l; i < r; i++) {
          if(arr1[i] > max && arr1[i] <= x){
            max = arr1[i];
          }
        }
        std::cout << max << '\n';
      }
    }


  }


}
