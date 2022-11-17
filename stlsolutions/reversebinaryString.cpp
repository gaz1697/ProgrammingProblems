#include <bits/stdc++.h>
using namespace std;

signed main(int argc, char const *argv[]) {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int t,n;
  string s;
  cin >> t;

 while (t--) {
    cin >> n;
    cin >> s;
    int numOfsteps1 = 0;
    int numOfsteps0 = 0;
    for(int i = 1; i < n; i++){
      if(s[i-1]==s[i]){
        if(s[i] == '1'){
          numOfsteps1++;

        }else{
          numOfsteps0++;

        }
      }
    }
    std::cout << max(numOfsteps0,numOfsteps1) << '\n';
  }
       }
