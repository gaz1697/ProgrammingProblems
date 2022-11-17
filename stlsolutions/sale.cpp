#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[]) {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  deque<int>r;
  priority_queue<int, vector<int>, greater<int>> qu;
  int t;
  cin >> t;
  while (t--) {
    char m;
    cin >> m;
    if(m == '1'){
      int d;
      cin >> d;
      r.push_back(d);

    }else if(m == '2'){
      if(qu.empty()){
          qu.push(r.front());
          r.pop_front();
      }
      cout << qu.top() << '\n';
      qu.pop();

    }else {

      while(r.size()){
          qu.push(r.front());
          r.pop_front();
      }

    }
  }

  return 0;
}
