#include <bits/stdc++.h>
using namespace std;

int isVisted[30001];
void dfs(int u,int mx, vector<int>edges[]){
  isVisted[u] = 1;
  mx++;
  for(auto s:edges[u]){
    if(!isVisted[s]){
      dfs(s,mx,edges);
    }
  }

}
int main(int argc, char const *argv[]) {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int t,n,m;
  while(t--){
  cin >> n >> m;
  int u,v;
  vector<int>edges[30001];
  // building graph
  for(int i = 0 ; i<m;i++){
    cin >> u >>v;
    edges[u].push_back(v);
    edges[v].push_back(u);
  }
  // dfsing
  int max = 0;

  for(int i = 1; i <=n;i++){
     memset(isVisted,0,sizeof(isVisted));
    int frinds = 0;
    if(!isVisted[i]){
     dfs(i,frinds,edges);
    }
    if(frinds > max){
      max = frinds;
    }
  }








    return 0;
}
