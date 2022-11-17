#include <bits/stdc++.h>
using namespace std;

int arr[100001];
signed main(int argc, char const *argv[]) {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int t,n,m,num,d,v;
      cin >> n >> m >> d;
      num = n*m;
      int max= 0;
      for (int i = 0; i < num; i++) {
        cin >> v;
        arr[i] =v;
        if(arr[i]> max){
          max = arr[i];
        }
      }


     sort(arr,arr+num);

      int count = 0;
      int midp = arr[num/2];
      int diff;
      if(num % 2 == 0){
        if(abs(arr[num/2]-arr[0]) > abs(arr[(num/2)-1] - arr[num-1]) ){
          midp = arr[(num/2)-1];
        }
      }
      for(int i = 0; i <num; i++){

        diff = arr[i]-midp;
        diff = abs(diff);
        if(diff % d == 0){
          if(i != num/2)
          count += diff/d;
        }else {
          count = -1;
          break;
        }
      }
      std::cout << count << '\n';

  }
