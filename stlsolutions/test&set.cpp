#include <bits/stdc++.h>
using namespace std;

signed main (int argc, char const *argv[])
{
  ios_base::sync_with_stdio (false);
  cin.tie (NULL);
  int t;
  cin >> t;

  while (t--) {


    int n, v, q, p, d;
    cin >> n >> q;
    map<int,int>myM;
    int arr[100000] = {};
    for(int i =0 ; i<n; i++){
      cin>> v;
      arr[i]=v;
      if(v > 0){
        myM[v]++;
      }
    }
    while (q--) {
      cin >> d;
      if(d == 1){
        cin >> p >> v;
        int val = arr[i];
        myM[val]--;
        if(myM[val] < 1){
          myM.erase[val];
        }
        myM[v]++;
      }else if(d == 2){
        cout << myM.size()<<'\n';

      }
    }

  }





}
