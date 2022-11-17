#include <bits/stdc++.h>
using namespace std;

map<int,int>indi;
signed main(int argc, char const *argv[]) {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int t,v;
  cin >> t;
  int sum =0;
  for(int i = 0 ; i < t; i++){
    cin >> v;
    sum += v;

    indi[sum]=i+1;

  }
    int sumdiv;
  if(sum % 2 == 0){
    sumdiv= (sum/2);

  }else{
    sumdiv= (sum/2)+1;
  }
  while(indi.find(sumdiv)==indi.end()){
      sumdiv++;
  }
  cout << indi[sumdiv] << '\n';

      }
