#include <bits/stdc++.h>
using namespace std;

signed main(int argc, char const *argv[]) {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  string s1,s2;
  int arrs1[58] = {0};
  int arrs2[58] = {0};
  getline(cin, s1);
  getline(cin, s2);

  for (int i = 0; i < s1.length(); i++) {
      if(s1[i] == ' '){

      }else{
     //   std::cout << (s1[i]-'A') << std::endl;
      arrs1[(s1[i] - 'A')]++;
    }
  }
  for (int i = 0; i < s2.length(); i++) {
    if(s2[i] == ' '){

    }else{
      arrs2[(s2[i] - 'A')]++;
    }
  }
  int tr = 1;
  for(int i = 0; i < 58; i++){
   // cout << arrs1[i] << " "<< arrs2[i]<< endl;
    if(arrs2[i] > arrs1[i]){
      std::cout << "NO" << '\n';
      tr = 0;
      break;
    }
  }
  if(tr == 1){
    std::cout << "YES" << '\n';
  }

}
