#include <bits/stdc++.h>
using namespace std;
int narr[101];
signed main(int argc, char const *argv[]) {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int n,p,q;
  cin >> n;
  for (int i = 0; i < n; i++) {
    narr[i]=1;
  }
  cin >> p;
  int count =0 ;
  for (int i = 0; i < p; i++) {
    int v; cin >> v;

    if(narr[v-1]==1){
      count++;
      narr[v-1] = -1;
    }

  }
  cin >> q;
   for (int i = 0; i < q; i++) {
    int v; cin >> v;

    if(narr[v-1]==1){
      count++;
      narr[v-1] = -1;
    }

   }
  if(count == n){
    std::cout << "I become the guy." << '\n';
  }else{
    std::cout << "Oh, my keyboard!" << '\n';
  }
  }
