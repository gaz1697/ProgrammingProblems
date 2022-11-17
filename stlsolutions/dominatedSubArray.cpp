#include <bits/stdc++.h>
using namespace std;

signed main(int argc, char const *argv[]) {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  map<int,int>mp;
  int t,n,m;
  cin >> t;
  while (t--) {
    cin >> n;
    int res = -1;
    int arr[n];
    int def;
    mp.clear();
   for(int i = 0 ; i < n; i++){
     cin >> m;
     arr[i] = m;
     if(mp.find(m) == mp.end()){
       mp[m] = i;
     }else{
        def = i - mp[m]+1;
        if(res == -1 ){
            res = def;
        }
        else if(def < res){
            res = def;
        }
        mp[m] = i;
     }


   }

        std::cout << res << '\n';
    }
   }
