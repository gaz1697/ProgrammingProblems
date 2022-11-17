#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(int argc, char const *argv[]) {


ll t,n;
std::cin >> t;
while (t--) {
  cin >> n;
  ll arr[3];
  for(ll i = 0; i < n; i++){
    ll v;
    cin >> v;
    arr[v%3]++;
  }
  ll sum = 0;
  int equ = n/3;
  for(int i = 0; i < 3; i++){
    if(arr[i] < 0){
      int val = (arr[i+1%3]-equ);
      arr[i]+= val;
      sum+=val;
      if(arr[i] < 0){
        int val = (arr[i+1%3]-equ)*2;
        arr[i]+= val;
        sum+=val;
      }
    }
  }

  }

}
