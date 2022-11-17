#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  priority_queue<int, vector<int>, greater<int>> NegQu;
  int t;
  int Sum = 0;
  int negSum = 0;
  int vals = 0;
  cin >> t;
  while (t--) {
   int f;
   cin >> f;
    if(f >= 0 ){
        Sum += f;
        vals++;

    }else {
        if((negSum + f)*-1<= Sum){
            NegQu.push(f);
            negSum += f;
        }else{
            if(NegQu.size() && f > NegQu.top()){
                negSum -= NegQu.top();
                NegQu.pop();
                NegQu.push(f);
                negSum += f;
            }


        }


    }

  }

    vals+=NegQu.size();
    cout << vals << '\n';


}
