#include <bits/stdc++.h>
using namespace std;
int arr[5];
int pizzas[49];
signed main(int argc, char const *argv[]) {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int t,n,v,c;
  cin >> t;
  while (t--) {
    for(int i = 0; i < 5; i++){
      cin >> c;
      arr[i]= c;
    }
    sort(arr,arr+5);
    cin >> n;
    for ( int i = 0; i < n ; i++) {
      cin >> v;
      pizzas[i]= v;
    }
    sort(pizzas,pizzas+n);
    for(int i = 0 ; i < 5; i++){
      if(arr[i] < pizzas[i]){
        std::cout << "NO" << '\n';
        break;
      }
      if(i == 4){
        std::cout << "YES" << '\n';
      }
    }
  }
  }
