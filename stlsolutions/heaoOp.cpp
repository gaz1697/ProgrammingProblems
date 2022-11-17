#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[]) {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int t;
  cin >> t;
  vector<string> v;
  priority_queue<int, vector<int>, greater<int>> qu;
  while (t--) {
    string k;
    cin >> k;
    if(k == "insert"){
      int m;
      cin >> m;
      qu.push(m);
      string k = "insert " + to_string(m);
      v.push_back(k);
    }
    else if(k == "removeMin"){
      if(qu.empty()){
         string k = "insert 0";
         v.push_back(k);
      }else{
          qu.pop();
      }
      string k = "removeMin";
      v.push_back(k);


    }
    else{
      int m;
      string k;
      cin >> m;
      while (!qu.empty() && m > qu.top()) {
        k = "removeMin";
        v.push_back(k);
        qu.pop();
      }
      if(qu.empty() || qu.top()!=m){
        qu.push(m);
        k = "insert " + to_string(m);
        v.push_back(k);
        k = "getMin "+ to_string(m);
        v.push_back(k);
      }else{
          k = "getMin "+ to_string(m);
          v.push_back(k);
      }
    }
  }
  cout << v.size() << '\n';
  for(string val:v){
      cout << val+'\n';
  }

  return 0;
}
