#include <bits/stdc++.h>
using namespace std;

signed main(int argc, char const *argv[]) {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int n;
  int moves = 0;
  priority_queue<int> qu;
  cin >> n;
  for(int i = 0 ; i<n ; i++){

    int k ;
    cin >> k;
    qu.push(k);
  }
  int m = n;
  for(int i = 0; i < n ; i++){

    int t = qu.top();
    if(t != m){
      t = t - m;
      moves + = abs(t);
    }
    m--;
  }
  std::cout << moves << '\n';
}
