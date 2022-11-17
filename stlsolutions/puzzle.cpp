#include <bits/stdc++.h>
using namespace std;

signed main(int argc, char const *argv[]) {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int arr[50];

  int n,m;
  int max = 0;
  cin >> n >> m;

  for(int i = 0 ; i < m ; i++){
    int k;
    cin >> k;
    arr[i] = k;
  }
  sort(arr,arr+m);
  int min = arr[n-1]-arr[0];
  int newmin;
  for(int i = 0 ; i < m-n+1 ; i++){


    newmin = arr[i+n-1]-arr[i];
  //  std::cout << arr[i+n-1] << std::endl;
    if(newmin < min){

      min = newmin;


    }

  }

  std::cout << min << '\n';

}
