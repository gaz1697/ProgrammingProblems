#include <bits/stdc++.h>
#define ll long long
using namespace std;
pair<ll,ll> arrG[101];
vector<ll> edges[10001];

bool dfs(ll x, ll y,bool vis[]){

  if(vis[x]){
    return;
  }
  vis[x] = 1;
  if(x == y){
    return true;
  }
  for (ll b:edges[x]) {
    dfs(b,y,vis);
  }

}
int main(int argc, char const *argv[]) {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int n,q;
  ll x,y;
  int i = 0;
  cin >> t;
  while (n--) {
    cin >> q;
    cin >> x >> y;
    if(q == 1){

      arrG[i]=make_pair(x,y);
      for(int k = 0; k < i ; k++){

        if((x > arrG[k].first && x < arrG[k].second)||(y > arrG[k].first && y < arrG[k].second)){
          edges[i].push_back(k);
        }
        if((arrG[k].first > x   && < arrG[k].first < y)||(< arrG[k].second > x && < arrG[k].second < y)){
          edges[k].push_back(y);
        }

      }


    } else{
        bool vis[101];
        if(dfs(x,y,vis)){
          std::cout << "YES" << '\n';
        }else{
          std::cout << "NO" << '\n';
        }



    }
  }

  return 0;
}
