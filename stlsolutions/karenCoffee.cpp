#include <bits/stdc++.h>
using namespace std;
int arr[2000001];
int sarr[2000001];
signed main(int argc, char const *argv[]) {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int n,k,q,li,ri;
  cin >> n >> k >> q;
  int count = 0;
  priority_queue<int, vector<int>, greater<int>> minquli;
  priority_queue<int, vector<int>, greater<int>> minquri;
    for(int i = 0 ; i < n ; i++){
       cin >> li >> ri;
       minquli.push(li);
       minquri.push(ri);
     }
   for(int i = 0 ; i < 2000001; i++){


    while(minquli.size() && i == minquli.top()){
      count++;
      minquli.pop();
    }
    arr[i] = count;
    while(minquri.size() && i == minquri.top()){
      count--;
      minquri.pop();
    }


  }
  for (int i = 0; i < 2000001; i++) {

     if(i == 0 && arr[i] >= k ){
       sarr[i] = 1;
     }else {
       int mor = 0;
       if(arr[i] >= k){
           mor = 1;
       }
       sarr[i] = mor + sarr[i-1];

     }
  }

    while(q--){
        cin >> li >> ri;
        if(li == 0){

            cout << sarr[ri] << '\n';
        }else{
            cout << sarr[ri]-sarr[li-1] << '\n';
        }

    }
}
