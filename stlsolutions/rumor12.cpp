#include <bits/stdc++.h>
#define ll long long
using namespace std;

vector<ll>edges[100005];
ll arr1[100005];
bool isVisted[100005];

ll dfs(int v){

      ll mn = arr1[v];
      isVisted[v] =1;

      for (ll x:edges[v]) {
        if(!isVisted[x]){
          mn = min(mn,dfs(x));
        }
      }
    return mn;

}
int main(int argc, char const *argv[]) {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int n,m;
  ll u,v;
  cin >> n >> m;
// taking the graph nodes and storing them in an array
  for(int i = 0 ; i < n; i++){
    cin >> arr1[i];

  }
// building the graph edges
  for (int i = 0; i < m; i++) {
     cin >> u >> v;
     u--; v--;
     edges[u].push_back(v);
     edges[v].push_back(u);
  }
  ll sum = 0;
//dfsing the graph
  for(int i = 0 ; i < n; i++){

      if(!isVisted[i]){
        sum += dfs(i);
      }

  }
  std::cout << sum << '\n';

  return 0;
}
