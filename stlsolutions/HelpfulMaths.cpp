#include <bits/stdc++.h>
using namespace std;

signed main(int argc, char const *argv[]) {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  priority_queue<int, vector<int>, greater<int>> pq;
  string k;
  getline(cin,k);
  for (size_t i = 0; i < k.length(); i++) {
    int e = k[i]-'0';
    if(e < 9 && e >=0){
      pq.push(e);
    }
  }

  while (pq.size()>1) {
    std::cout << pq.top() << '+';
    pq.pop();
  }
  std::cout << pq.top();

}
