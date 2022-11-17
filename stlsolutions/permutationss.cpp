#include <bits/stdc++.h>
using namespace std;
//int arra[31];
//int arrb[31];
signed main(int argc, char const *argv[]) {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int t,n;
  cin >> t;
//  priority_queue<int, vector<int>, greater<int>> minqu;
//  priority_queue<int> maxqu;
  while (t--) {
    cin >> n;
    for(int i = 0; i < n; i++){
      std::cout << (i%n)+1 << ' ';
    }
    std::cout << "" << '\n';
  }
       }
