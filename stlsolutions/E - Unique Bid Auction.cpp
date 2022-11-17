#include <bits/stdc++.h>
using namespace std;

int narr[200001];
signed main(int argc, char const *argv[]) {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int t,n,p,q;
  set<int>unique;
  set<int>notUnique;
  cin >> t;
  while (t--) {
    cin>>n;
    unique.clear();
    notUnique.clear();
    for(int i = 0; i<n; i++){
      int v; cin>>v;
      narr[v]=i;
      if(notUnique.find(v) == notUnique.end()){
        if(unique.find(v) == unique.end()){
          unique.insert(v);
        }else{
          unique.erase(v);
          notUnique.insert(v);
        }
      }
    }
    if(unique.size()){

      std::cout << narr[*unique.begin()]+1 << '\n';
    }else{
      std::cout << "-1" << '\n';
    }


  }

  }
