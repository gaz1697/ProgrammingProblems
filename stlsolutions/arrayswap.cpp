#include <bits/stdc++.h>
using namespace std;
int arra[31];
int arrb[31];
signed main(int argc, char const *argv[]) {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int t,v,j,max,n,k;
  cin >> t;
  priority_queue<int, vector<int>, greater<int>> minqu;
  priority_queue<int> maxqu;
  while (t--) {
    cin >> n >> k;
    for (int i = 0; i < n; i++) {
      cin >> v;
      minqu.push(v);
    }
    for (int i = 0; i < n; i++) {
      cin >> v;
      maxqu.push(v);
    }
    while (maxqu.size() && minqu.top() < maxqu.top() && k--) {
      v = maxqu.top();
      maxqu.pop();
      minqu.pop();
      minqu.push(v);
    }
    int sum = 0;
    while (minqu.size()) {
      sum += minqu.top();
      minqu.pop();
    }
    std::cout << sum << '\n';
  }
       }
