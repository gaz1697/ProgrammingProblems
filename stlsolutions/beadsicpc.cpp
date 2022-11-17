#include <bits/stdc++.h>
using namespace std;


signed main(int argc, char const *argv[]) {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int t,n,v;
  unordered_set <int> beads ;
  unordered_set <int> doubeads ;
  cin >> t;
  while (t--) {
    beads.clear();
    doubeads.clear();
    cin >> n;

    int k = 0;
      for(int i = 0 ; i < (n-1)*2; i++) {
        cin >> v;
        if(beads.find(v) == beads.end()){
          beads.insert(v);

        }else{
          doubeads.insert(v);
        }
      }
      k = beads.size()-doubeads.size();
      std::cout << k << '\n';


    }
  }
