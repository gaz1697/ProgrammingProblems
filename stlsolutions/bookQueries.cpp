#include <bits/stdc++.h>
using namespace std;
//int arr[200001];



signed main(int argc, char const *argv[]) {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL); cout.tie(NULL);
  std::map<int, int> map;
  int n,v;
  char c;
  cin >> n;
  int right = 1;
  int left = -1;
  int m = 0;
  cin >> c >> v;
  map[v] = 0;
  n--;
  while (n--) {
    cin >> c >> v;
  //  std::cout << c  << " " <<v << std::endl;
    if(c == 'L'){
   //  std::cout << left << std::endl;
      map[v] = left;
      left += -1;
    //  std::cout <<"left : " << left << " right : "<<right << std::endl;
      m++;
    }
    else if(c == 'R'){
   //  std::cout << right << std::endl;
      map[v] = right;
      right += 1;
     // std::cout <<"left : " << left << " right : "<<right << std::endl;
      m++;
    }
    else{
      int d = map[v];
    //  std::cout << " d " << d << std::endl;
      if(abs(left-d) < abs(right-d)){
        std::cout << abs(left-d)-1 << '\n';
      }else{
        std::cout  << abs(right-d)-1 << '\n';
      }
    }
  }


}
