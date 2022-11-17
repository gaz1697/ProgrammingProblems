#include <bits/stdc++.h>
using namespace std;


signed main(int argc, char const *argv[]) {
  std::vector<string> v ;
  int m;
  string s;
  cin >> s >> m;
  string k = "";
  int ind = 0;
  for(int i = 0; i < s.length(); i++){

    int r = i%m;
    k  += s[i];

    if(r == m-1){

      v.push_back(k);
      k = "";
      ind++;
    }

  }
  sort(v.begin(), v.end());
  for (int i = 0; i < ind; i++) {
    std::cout << v.at(i) << '\n';
  }


  }
