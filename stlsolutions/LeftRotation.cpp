#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[]) {
  int t , r;
  std::cin >> t >> r;
  int arr[t];
  int b = 0;
  int k = t;
  while(t--){
    int s = b-r;

    if(s < 0 ){
      s = s * -1;

      s = k-s;

    }

    std::cin >> arr[s];
    b++;


  }
  for(int f : arr){
    std::cout << f << " ";
  }
  return 0;
}
