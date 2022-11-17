#include <bits/stdc++.h>
using namespace std;
//int arrS[200000];
vector<int> ans;
int main(int argc, char const *argv[]) {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int n,maxS,l,r;
  cin >> n >> maxS;
  priority_queue<pair<int,int>myWindow;
  for(int i = 0; i < n;i++){
    cin >> l >> r;
  //  arrS[i]=make_pair(l,r);
    myWindow.push(r,i);
    if(myWindow.size() > maxS){
      ans.push_back(myWindow.top().second)
      myWindow.pop();
    }
  }
  cout << ans.size() << '/n';
  for(int i = 0; i < ans.size(); i++){
    cout << ans[i]]<<" " <<'\n';
  }




    return 0;
}
