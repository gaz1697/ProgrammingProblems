#include <bits/stdc++.h>
using namespace std;


signed main(int argc, char const *argv[]) {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL); cout.tie(NULL);
  std::map<string, int> map;
  int t;
  cin >> t;
  while (t--) {
    int arr[10] = {0};
    string num;
    cin >> num;

    for(int i = 0 ; i < num.length(); i++){
       int digi = num[i] - '0';

       arr[digi]++;

    }


    bool isbad = false;
    for(int i = 0; i < num.length(); i++){
      int digi = num[i] - '0';

      if(arr[i] != digi){
         std::cout << "not self-describing" << '\n';
        isbad = true;
        break;

      }
    }
    if(!isbad){
      std::cout << "self-describing" << '\n';
    }

  }


}
